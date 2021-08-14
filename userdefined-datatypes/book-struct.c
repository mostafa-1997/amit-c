#include <stdio.h>

typedef union book{
    struct fantasy{
        char author[20];
        char title[20];
        int id;
    }fantasy;
    struct math{
        char author[20];
        char title[20];
        int id;
    }math;
    struct science{
        char author[20];
        char title[20];
        int id;
    }science;
}library;

//function protoytpe
void bookDetails(union book* book);

int main()
{
    library fantasyBook = {.fantasy.author="J. K. Rowling",.fantasy.title = "Harry Potter",.fantasy.id = 556};
    
    bookDetails(&fantasyBook);

    return 0;
}
//function Definition
void bookDetails(union book* book){
    printf("Book Title : %s\nBook Author : %s\nBook ID : %d",book->fantasy.title,book->fantasy.author,book->fantasy.id);
}