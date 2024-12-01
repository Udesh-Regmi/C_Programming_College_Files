#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUSES 10
#define MAX_USERS 100
#define USER_FILE "users.txt"
#define SEAT_LIMIT 30  // Assuming each bus has 30 seats

// Structure for Bus
typedef struct {
   int bus_number;
   char category[50];
   int available_seats[SEAT_LIMIT];  // 0 for available, 1 for booked
   float price;
} Bus;

// Structure for User
typedef struct {
   char username[50];
   char password[50];
} User;

// Function Declarations
int register_user();
int login_user();
void load_buses(Bus buses[], int *count);
void display_buses(Bus buses[], int count);
int select_bus(Bus buses[], int count);
int choose_seat(Bus *bus);
void cancel_seat(Bus *bus);
void view_bus_status(Bus *bus);
void update_bus_file(Bus buses[], int count);
float calculate_price(Bus *bus, int seat_number, int is_night);
void print_total_fare(float price, int seat_number, int is_night);

int main() {
   int choice, logged_in = 0, bus_count = 0, bus_index = -1, seat_number, is_night = 0;
   Bus buses[MAX_BUSES];
   load_buses(buses, &bus_count);

   printf("Welcome to the Bus Reservation System!\n");

   // Registration or Login
   printf("1. Register\n2. Login\nChoose an option: ");
   scanf("%d", &choice);
   if (choice == 1) {
       if (register_user()) {
           logged_in = 1;
       }
   } else if (choice == 2) {
       logged_in = login_user();
   }

   if (!logged_in) {
       printf("Exiting program.\n");
       return 0;
   }

   // Menu loop
   while (1) {
       printf("\nMenu:\n");
       printf("1. Select Bus\n");
       printf("2. Book a Seat\n");
       printf("3. Cancel a Seat\n");
       printf("4. View Bus Status\n");
       printf("5. Set Night Travel (1 for Yes, 0 for No)\n");
       printf("6. Exit\n");
       printf("Enter your choice: ");
       scanf("%d", &choice);

       switch (choice) {
           case 1:
               display_buses(buses, bus_count);
               bus_index = select_bus(buses, bus_count);
               if (bus_index == -1) {
                   printf("Invalid bus selection. Please try again.\n");
               }
               break;

           case 2:
               if (bus_index == -1) {
                   printf("Please select a bus first.\n");
               } else {
                   seat_number = choose_seat(&buses[bus_index]);
                   if (seat_number != -1) {
                       // Calculate total fare based on the bus, seat, and night condition
                       float total_fare = calculate_price(&buses[bus_index], seat_number, is_night);
                       print_total_fare(total_fare, seat_number, is_night);
                       update_bus_file(buses, bus_count);
                   }
               }
               break;

           case 3:
               if (bus_index == -1) {
                   printf("Please select a bus first.\n");
               } else {
                   cancel_seat(&buses[bus_index]);
                   update_bus_file(buses, bus_count);
               }
               break;

           case 4:
               if (bus_index == -1) {
                   printf("Please select a bus first.\n");
               } else {
                   view_bus_status(&buses[bus_index]);
               }
               break;

           case 5:
               printf("Is this night travel? (1 for Yes, 0 for No): ");
               scanf("%d", &is_night);
               break;

           case 6:
               printf("Exiting program.\n");
               return 0;

           default:
               printf("Invalid choice. Please try again.\n");
       }
   }

   return 0;
}

int register_user() {
   User new_user;
   FILE *file = fopen(USER_FILE, "a");
   if (file == NULL) {
       printf("Error opening file!\n");
       return 0;
   }

   printf("Enter username: ");
   scanf("%s", new_user.username);
   printf("Enter password: ");
   scanf("%s", new_user.password);

   fprintf(file, "%s %s\n", new_user.username, new_user.password);
   fclose(file);
   printf("User registered successfully!\n");
   return 1;
}

int login_user() {
   User user;
   char input_username[50], input_password[50];
   FILE *file = fopen(USER_FILE, "r");
   if (file == NULL) {
       printf("Error opening file!\n");
       return 0;
   }

   printf("Enter username: ");
   scanf("%s", input_username);
   printf("Enter password: ");
   scanf("%s", input_password);

   while (fscanf(file, "%s %s", user.username, user.password) != EOF) {
       if (strcmp(input_username, user.username) == 0 && strcmp(input_password, user.password) == 0) {
           fclose(file);
           printf("Login successful!\n");
           return 1;
       }
   }

   fclose(file);
   printf("Invalid username or password!\n");
   return 0;
}

void load_buses(Bus buses[], int *count) {
   // Loading hardcoded buses for demonstration
   buses[0] = (Bus){15, "Sofa", {0}, 3500.0};
   buses[1] = (Bus){30, "Luxury", {0}, 3000.0};
   buses[2] = (Bus){45, "Standard", {0}, 2250.0};
   *count = 3;  // 3 buses loaded for example
}

void display_buses(Bus buses[], int count) {
   printf("Available buses:\n");
   for (int i = 0; i < count; i++) {
       printf("Bus Number: %d | Category: %s | Price: %.2f\n",
              buses[i].bus_number, buses[i].category, buses[i].price);
   }
}

int select_bus(Bus buses[], int count) {
   int bus_number;
   printf("Enter the bus number to select: ");
   scanf("%d", &bus_number);
   for (int i = 0; i < count; i++) {
       if (buses[i].bus_number == bus_number) {
           printf("Bus %d selected.\n", bus_number);
           return i;  // Return the index of the selected bus
       }
   }
   printf("Bus number not found.\n");
   return -1;
}

void view_bus_status(Bus *bus) {
   int booked_seats = 0;
   for (int i = 0; i < SEAT_LIMIT; i++) {
       if (bus->available_seats[i] == 1) {
           booked_seats++;
       }
   }

   printf("Bus Number: %d | Category: %s\n", bus->bus_number, bus->category);
   printf("Total Seats: %d | Booked Seats: %d | Available Seats: %d\n",
          SEAT_LIMIT, booked_seats, SEAT_LIMIT - booked_seats);

   printf("\nSeat Availability: \n");
   for (int i = 0; i < SEAT_LIMIT; i++) {
       printf("Seat %d: %s\n", i + 1, bus->available_seats[i] == 0 ? "Available" : "Booked");
   }
}

int choose_seat(Bus *bus) {
   int seat_number;
   printf("Enter the seat number (1-%d) to book: ", SEAT_LIMIT);
   scanf("%d", &seat_number);
   if (seat_number < 1 || seat_number > SEAT_LIMIT) {
       printf("Invalid seat number.\n");
       return -1;
   }

   // Check if the seat is already booked
   if (bus->available_seats[seat_number - 1] == 1) {
       printf("This seat is already booked.\n");
       return -1;
   }

   // Book the seat
   bus->available_seats[seat_number - 1] = 1;
   printf("Seat %d successfully booked!\n", seat_number);
   return seat_number;
}

void cancel_seat(Bus *bus) {
   int seat_number;
   printf("Enter the seat number (1-%d) to cancel: ", SEAT_LIMIT);
   scanf("%d", &seat_number);
   if (seat_number < 1 || seat_number > SEAT_LIMIT) {
       printf("Invalid seat number.\n");
       return;
   }

   // Check if the seat is booked
   if (bus->available_seats[seat_number - 1] == 0) {
       printf("This seat is not booked.\n");
       return;
   }

   // Cancel the seat
   bus->available_seats[seat_number - 1] = 0;
   printf("Seat %d successfully canceled!\n", seat_number);
}

void update_bus_file(Bus buses[], int count) {
   FILE *file = fopen("buses.txt", "w");
   if (file == NULL) {
       printf("Error opening bus file!\n");
       return;
   }

   for (int i = 0; i < count; i++) {
       fprintf(file, "%d %s %.2f\n", buses[i].bus_number, buses[i].category, buses[i].price);
       for (int j = 0; j < SEAT_LIMIT; j++) {
           fprintf(file, "%d ", buses[i].available_seats[j]);
       }
       fprintf(file, "\n");
   }
   fclose(file);
}

float calculate_price(Bus *bus, int seat_number, int is_night) {
   float base_price = bus->price;
   if (is_night) {
       base_price *= 1.2;  // Night travel has a 20% surcharge
   }
   return base_price;
}
void print_total_fare(float price, int seat_number, int is_night) {
   printf("Total fare for Seat %d: %.2f\n", seat_number, price);
}
