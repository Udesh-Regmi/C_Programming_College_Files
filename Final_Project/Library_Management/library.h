#ifndef LIBRARY_H
#define LIBRARY_H

// Structure for storing book information
typedef struct {
    int id;             // Unique book ID
    char title[100];    // Book title
    char author[100];   // Author of the book
    int year;           // Year of publication
    float price;        // Book price
} Book;

// Function declarations
void addBook(Book library[], int *count);
void deleteBook(Book library[], int *count, int bookId);
void updateBook(Book library[], int count, int bookId);
void displayBooks(Book library[], int count);
void listBooksByAuthor(Book library[], int count, char author[]);
int countBooks(Book library[], int count);
int searchBook(Book library[], int count, char title[]);

#endif
