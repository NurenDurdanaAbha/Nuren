#include<iostream>

using namespace std;

class Library
{
    private:
    int membershipID,roll;
    string name,section;

    class book_info
    {
        private:
        int bookID,numberOfBooks;
        string bookName,authorName,bookIssueDate,bookReturnDate;

    };
};














    cout<<endl<<"******Choice list*******"<<endl<<endl<<endl;
    cout<<"|a| Add New Student."<<endl<<"|b| Existing Student."<<endl;
    cout<<"|c| Delete record."<<endl<<"|d| End programme."<<endl;


    cout<<endl<<"=> Enter your choice......(a, b or c): ";
