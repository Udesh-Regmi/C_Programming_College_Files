#include <stdio.h>
#include <string.h>
#include "library.h"

int main() {
    Book library[100];  // Array to store books (can store up to 100 books)
    int count = 0;      // Counter for the number of books
    int choice, bookId;
    char author[100], title[100];

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add Book\n");
        printf("2. Delete Book\n");
        printf("3. Update Book\n");
        printf("4. Display Books\n");
        printf("5. List Books by Author\n");
        printf("6. Count Books\n");
        printf("7. Search Book\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook(library, &count);
                break;
            case 2:
                printf("Enter Book ID to delete: ");
                scanf("%d", &bookId);
                deleteBook(library, &count, bookId);
                break;
            case 3:
                printf("Enter Book ID to update: ");
                scanf("%d", &bookId);
                updateBook(library, count, bookId);
                break;
            case 4:
                displayBooks(library, count);
                break;
            case 5:
                printf("Enter Author's Name: ");
                getchar();  // Consume newline character
                fgets(author, 100, stdin);
                author[strcspn(author, "\n")] = '\0';  // Remove newline from author name
                listBooksByAuthor(library, count, author);
                break;
            case 6:
                printf("Total books in the library: %d\n", countBooks(library, count));
                break;
            case 7:
                printf("Enter Book Title to search: ");
                getchar();  // Consume newline character
                fgets(title, 100, stdin);
                title[strcspn(title, "\n")] = '\0';  // Remove newline from title
                searchBook(library, count, title);
                break;
            case 8:
                printf("Exiting the system.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
