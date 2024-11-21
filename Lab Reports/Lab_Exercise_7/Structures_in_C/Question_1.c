//  Create a structure named company which has a name, address, phone, and
// noOfEmployee as member variables. Read the company name, address, phone number,
// and no. of employees. Finally display these members’ values.
#include <stdio.h>

// Define the structure
struct Company {
    char name[50];
    char address[100];
    char phone[15];
    int noOfEmployees;
};

int main() {
    struct Company company;

    // Input company details
    printf("Enter company name: ");
    fgets(company.name, 50, stdin);

    printf("Enter company address: ");
    fgets(company.address, 100, stdin);

    printf("Enter company phone number: ");
    fgets(company.phone, 15, stdin);

    printf("Enter number of employees: ");
    scanf("%d", &company.noOfEmployees);

    // Display company details
    printf("\nCompany Details:\n");
    printf("Name: %s", company.name);
    printf("Address: %s", company.address);
    printf("Phone: %s", company.phone);
    printf("Number of Employees: %d\n", company.noOfEmployees);

    return 0;
}
