#ifndef __LIBRARYSYSTEM_H
#define __LIBRARYSYSTEM_H
#include <iostream>
#include <string>
#include "Book.h"
#include "Student.h"

using namespace std;

class LibrarySystem {



public:
    LibrarySystem();

    ~LibrarySystem();

    void addBook( const int bookId, const string name, const int year );

    void deleteBook( const int bookId );

    void addStudent( const int studentId, const string name );

    void deleteStudent( const int studentId );

    void checkoutBook( const int bookId, const int studentId );

    void returnBook( const int bookId );

    void showAllBooks();

    void showBook( const int bookId );

    void showStudent( const int studentId );


private:
    struct NodeD{    //Node for Doubly List
        Student dataD;
        NodeD *nextD;
        NodeD *prevD;
    };

    int sizeD;
    NodeD *headD;

    struct NodeS{   //Node for Singly List
        Book dataS;
        NodeS *nextS;
    };

    int sizeS;
    NodeS *headS;

};
#endif
