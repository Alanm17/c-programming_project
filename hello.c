#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    char ISBN[20];
    int year;
    int available; 
};

int main() {
   
    struct Book myBook;
    
    
    strcpy(myBook.title, "Old life");
    strcpy(myBook.author, "Mukhammadaziz");
    strcpy(myBook.ISBN, "1234567890");
    myBook.year = 2023;
    myBook.available = 10; 
    
    
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Year: %d\n", myBook.year);
    printf("Availability: %s\n", myBook.available ? "Available" : "Borrowed");
    
    return 0;
}