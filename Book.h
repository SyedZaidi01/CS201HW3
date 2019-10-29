#ifndef __BOOK_H
#define __BOOK_H
#include "Student.h"

#include <string>
using namespace std;

class Book{
public:
    Book( const int id = 0, const string title = "", const int year = 0);
    ~Book();
    int getId();
    string getTitle();
    int getYear();
    bool isCheckOut();
    void setCheckOut( bool option);
    void setOwner(Student & studentA );
    //Student* getOwner();
    void display();

private:
    string title;
    int year;
    int id;
    bool checkedOut;
    Student owner;
};

#endif

