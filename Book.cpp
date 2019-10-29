#include <iostream>
#include "Book.h"
#include <string>
#include <iomanip>

using namespace std;

    Book::Book( const int idA ,const string titleA, const int yearA ){
        title = titleA;
        year = yearA;
        id = idA;
    }

    Book::~Book(){}

    int Book::getId(){
        return id;
    }

    string Book::getTitle(){
        return title;
    }
    int Book::getYear(){
        return year;
    }

    bool Book::isCheckOut(){
        return checkedOut;
    }
    void Book::setCheckOut( bool option){
        checkedOut = option;
    }
    void Book::setOwner(Student & studentA ){
        owner = studentA;
    }
    void Book::display(){

        cout << getId();
        printf("%15s", " ");
        cout<<left;
        cout<<setw(20) << getTitle();
        cout<< left;
        printf("%15s", " ");
        cout<< getYear();
        cout<< left;
        printf("%15s", " ");
        cout<< "Not checked out";
        cout<< endl;

    }

    /*Student* Book::getOwner(){
        if( owner != NULL){     printf("x = %d \n", x);
            return owner;
        }
    }*/
