#include "LibrarySystem.h"

int main() {

    LibrarySystem LS;

    LS.addBook(00012345,"Harry Potter", 1986);  //TEST 1
   // LS.deleteBook(00012345);

    LS.addBook(00012345,"Harry Potter", 1986);  //TEST 2
    LS.deleteBook(7272725);

    LS.addBook(00012345,"Harry Potter", 1986);  //TEST 3
    LS.addBook(00012345,"Harry Potter", 1986);  //TEST 4

    LS.addBook(12345343, "Gone With The Wind", 2004);    //TEST 5

    LS.showAllBooks();     //TEST 6

    LS.addBook(98713265, "The Alchemist", 2015);   //TEST 7

    cout<< endl;

    LS.showAllBooks();  //TEST 8







    return 0;
}
