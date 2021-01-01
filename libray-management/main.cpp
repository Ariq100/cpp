#include <iostream>
#include <string>
using namespace std;

class Library
{
    public:
    string authorName, publication, company, ISBN_Number, totalCopy, bookName;
    string whichBook;
    int borrow_1;

    public:
    void info()
    {
        cout << "Author's Name :" << authorName << "\nPublication Date : " << publication << "\nCompany's Name : " << company << "\nTotal Copies : " << totalCopy << "ISBN-Nunber : " << ISBN_Number << endl;
    }
};

int main()
{
    cout << endl << endl;

    Library book_1;

    book_1.authorName = "Jeff Kinney";
    book_1.publication = "5th Jan. 2020";
    book_1.company = "Amulet Book";
    book_1.totalCopy = "150 thousand copies";
    book_1.bookName = "Diary Of A Wimpy Kid - Cabin Fevers";

    book_1.info();

    cout << endl << endl;

    Library book_2;

    book_2.authorName = "George R. R. Martin";
    book_2.publication = "2nd Jul. 2015";
    book_2.company = "Bantam Spectra";
    book_2.totalCopy = "50 thousand copies";
    book_2.bookName = "Game of thrones";

    book_2.info();

    cout << endl << endl;

    Library book_3;

    book_3.authorName = "R. L. Stine";
    book_3.publication = "31 Dec. 2008";
    book_3.company = "N/A";
    book_3.totalCopy = "125.9 thousand copies";
    book_3.bookName = "Goosebumps - Horror Land";

    book_3.info();

    cout << endl << endl;

    return 0;
}