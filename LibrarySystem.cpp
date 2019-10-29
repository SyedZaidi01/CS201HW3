#include "LibrarySystem.h"
#include <iostream>
#include <iomanip>

using namespace std;

    LibrarySystem::LibrarySystem(){
        sizeD = 0;
        sizeS = 0;

        headD = NULL;   //Doubly Head
        headS = NULL;   //Singly Head
    }

    LibrarySystem::~LibrarySystem(){
        for( NodeS* newPtr = headS->nextS; newPtr != headS; newPtr = newPtr->nextS){
            NodeS* temp = newPtr;
            delete newPtr;
            newPtr = temp;
        }
    }

    void LibrarySystem::addBook( const int bookId, const string name, const int year ){

            Book tempBook( bookId, name, year);
            bool check = false;

            for (int i =0; i < sizeS; i++){
                NodeS *curr = headS;
                if (curr->dataS.getId() == bookId)
                {
                    check = true;
                    cout<< "The book " << bookId <<  " already exists" << endl;
                    break;
                }
            }
            if (!check){
                NodeS *newnode = new NodeS;
                NodeS *newPtr = headS;

                newnode->dataS = tempBook;
                newnode->nextS = headS;

                if (headS!= NULL) {
                    while (newPtr->nextS != headS){
                        newPtr = newPtr->nextS;
                    }
                    newPtr->nextS = newnode;
                    sizeS++;
                    cout<< "Book "<< bookId << " has been added"<< endl;
                }
                else{
                    newnode->nextS = newnode;
                    headS = newnode;
                    sizeS++;
                    cout<< "Book "<< bookId << " has been added"<< endl;
                }

                }

        }


    void LibrarySystem::deleteBook( const int bookID ){
        bool check = false;
        if (headS == NULL)
            return;

        // Find the required node
        NodeS *curr = headS;
        NodeS *origPtr;
        while (curr->dataS.getId() != bookID){
            if (curr->nextS == headS){
                check = true;
                cout << "The book " << bookID << " does not exist" << endl;
                break;
            }

            origPtr = curr;
            curr = curr -> nextS;
        }
        if( !check){
        if (curr->nextS == headS){
            headS = NULL;
            free(curr);             //FREES ANY ALLOCATED DYNAMIC MEMORY
            sizeS--;
            cout << "The book " << bookID << " has been deleted" << endl;
            return;
        }

        if (curr == headS){
            origPtr = headS;
            while (origPtr -> nextS != headS){
                origPtr = origPtr -> nextS;
            }
            headS = curr->nextS;
            origPtr->nextS = headS;
            free(curr);
            cout << "The book " << bookID << " has been deleted" << endl;
            sizeS--;
        }
        else if (curr->nextS == headS){
            origPtr->nextS = headS;
            free(curr);
            cout << "The book " << bookID << " has been deleted" << endl;
            sizeS--;
        }
        else
        {
            origPtr->nextS = curr->nextS;
            free(curr);
            cout << "The book " << bookID << " has been deleted" << endl;
            sizeS--;
        }
        }
    }


    void LibrarySystem::addStudent( const int studentId, const string name ){}

    void LibrarySystem::deleteStudent( const int studentId ){}

    void LibrarySystem::checkoutBook( const int bookId, const int studentId ){}

    void LibrarySystem::returnBook( const int bookId ){}

    void LibrarySystem::showAllBooks(){
        NodeS *temp = headS;
        if (headS != NULL){   cout << "Book id";
            printf("%13s", " ");
            cout<<left;
            cout<<setw(19) << "Book name";
            cout<< left;
            printf("%15s", " ");
            cout<< "Year";
            cout<< left;
            printf("%15s", " ");
            cout<< "Status";
            cout<< endl;
            do
            {
                temp->dataS.display();
                temp = temp->nextS;
            }
            while (temp != headS);
    }
    }

    void LibrarySystem::showBook( const int bookId ){}

    void LibrarySystem::showStudent( const int studentId ){}


