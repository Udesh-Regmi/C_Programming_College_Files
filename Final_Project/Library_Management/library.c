#include <stdio.h>
#include <string.h>
#include "library.h"

// Function to add book information
void addBook(Book library[], int *count) {
    Book newBook;
    
    printf("Enter Book ID: ");
    scanf("%d", &newBook.id);
    getchar();  // Consume the newline character left by scanf
    
    printf("Enter Book Title: ");
    fgets(newBook.title, 100, stdin);
    newBook.title[strcspn(newBook.title, "\n")] = '\0';  // Remove newline from title
    
    printf("Enter Book Author: ");
    fgets(newBook.author, 100, stdin);
    newBook.author[strcspn(newBook.author, "\n")] = '\0';  // Remove newline from author
    
    printf("Enter Year of Publication: ");
    scanf("%d", &newBook.year);
    
    printf("Enter Book Price: ");
    scanf("%f", &newBook.price);
    
    library[*count] = newBook;
    (*count)++;
    printf("Book added successfully!\n");
}

// Function to delete book information
void deleteBook(Book library[], int *count, int bookId) {
    int found = 0;
    for (int i = 0; i < *count; i++) {
        if (library[i].id == bookId) {
            // Shift the books after the deleted book
            for (int j = i; j < *count - 1; j++) {
                library[j] = library[j + 1];
            }
            (*count)--;
            found = 1;
            printf("Book with ID %d deleted successfully!\n", bookId);
            break;
        }
    }
    if (!found) {
        printf("Book with ID %d not found!\n", bookId);
    }
}

// Function to update book information
void updateBook(Book library[], int count, int bookId) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (library[i].id == bookId) {
            printf("Enter new details for the book:\n");
            
            printf("Enter new Book Title: ");
            getchar();  // Consume newline from previous input
            fgets(library[i].title, 100, stdin);
            library[i].title[strcspn(library[i].title, "\n")] = '\0';
            
            printf("Enter new Book Author: ");
            fgets(library[i].author, 100, stdin);
            library[i].author[strcspn(library[i].author, "\n")] = '\0';
            
            printf("Enter new Year of Publication: ");
            scanf("%d", &library[i].year);
            
            printf("Enter new Book Price: ");
            scanf("%f", &library[i].price);
            
            found = 1;
            printf("Book with ID %d updated successfully!\n", bookId);
            break;
        }
    }
    if (!found) {
        printf("Book with ID %d not found!\n", bookId);
    }
}

// Function to display all books
void displayBooks(Book library[], int count) {
    printf("Displaying all books:\n");
    for (int i = 0; i < count; i++) {
        printf("\nBook ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Year: %d\n", library[i].year);
        printf("Price: %.2f\n", library[i].price);
    }
}

// Function to list all books of a given author
void listBooksByAuthor(Book library[], int count, char author[]) {
    int found = 0;
    printf("Books by Author %s:\n", author);
    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].author, author) == 0) {
            printf("\nBook ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Year: %d\n", library[i].year);
            printf("Price: %.2f\n", library[i].price);
            found = 1;
        }
    }
    if (!found) {
        printf("No books found by Author %s\n", author);
    }
}

// Function to count the number of books
int countBooks(Book library[], int count) {
    return count;
}

// Function to search for a book by title
int searchBook(Book library[], int count, char title[]) {
    for (int i = 0; i < count; i++) {
        if (strcmp(library[i].title, title) == 0) {
            printf("Book found!\n");
            printf("Book ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Year: %d\n", library[i].year);
            printf("Price: %.2f\n", library[i].price);
            return 1;
        }
    }
    printf("Book with title '%s' not found.\n", title);
    return 0;
}
