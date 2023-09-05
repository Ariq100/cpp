#include <iostream>
#include <string>
#include <unordered_set>
#include <construction.cpp>
using namespace std;

char select;
class Library
{
    public:
    string authorName = " ", publication = " ", company = " ", ISBN_Number = " ", totalCopy = " ", bookName = " ", whichBook1 = " ", borrow1Name = " ";
    int borrow1;

    public:
    void info()
    {
        cout << "Author's Name :" << authorName << "\nPublication Date : " << publication << "\nCompany's Name : " << company << "\nTotal Copies : " << totalCopy << "ISBN-Nunber : " << ISBN_Number << endl;
    }

    void borrowSuccess()
    {
        cout << "You can borrow this book but for a certain amount of time. After that you have o pay for the book." << endl;
    }

    void borrowFailed()
    {
        cout << "You have already borrowed a book once. You can't borrow another book until you return that one." << endl;
    }

    void borroTwo()
    {
        cout << "You can't borrow two books at once." << endl;
    }

    void borrowReturn()
    {
        cout << "Thanks for returning the book"<< borrow1Name << ". Have a great day!!!!!" << endl;

        borrow1Name.clear();
        whichBook1.clear();
        borrow1 = 0;
    }
};

void menu()
{
    system("cls");

    cout << "1.Borrow" << endl;
    cout << "2.Return" << endl;
    cout << "3.View" << endl;
    // cout << "4.View Borrowed books" << endl;
    cout << "4.Exit" << endl  << endl;

    cout << "Select : ";
    cin >> select;

    system("cls");
}

int main()
{
    while (true)
    {
        menu();

        if (select == '1')
        {
            Library borrow_1;

            if (borrow_1.borrow1Name == " ")
            {
                cin.ignore();

                cout << "What is your name : ";
                getline(cin, borrow_1.borrow1Name);

                cout << "What book do you want to borrow?? : ";
                getline(cin, borrow_1.whichBook1);

                cout << endl;

                cout << "Here you go a copy of the " << borrow_1.whichBook1 << endl << endl;
                cout << "******************************************************************" << endl;

                borrow_1.borrowSuccess();

                cout << "Have a great day!!!!" << endl << endl;

                borrow_1.borrow1 = 1;
            }

            else if (borrow_1.borrow1Name != " ")
            {
                if (borrow_1.borrow1 == 1)
                {
                    borrow_1.borrowFailed();
                }

                else if (borrow_1.borrow1 != 1)
                {
                    cout << "What book do you want to borrow?? : ";
                    getline(cin, borrow_1.whichBook1);

                    cout << "Here you go a copy of the " << borrow_1.whichBook1 << endl;
                    cout << "*****************************" << endl << endl;

                    borrow_1.borrowSuccess();

                    borrow_1.borrow1 = 1;
                }
            }
        }

        else if (select == '2')
        {
            Library borrow_return_1;

            borrow_return_1.borrowReturn();
        }

        else if (select == '3')
        {
            system("cls");

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
        }

        // else if (select == '4')
        // {
        //     cout << "Name : " << borrow_1.borrow1Name << endl;
        //     cout << "Book : " << borrow_1.whichBook1 << endl;
        // }

        else if (select == '4')
        {
            cout << "Thanks for using!!!" << endl;
            break;
        }
        
        system("Pause");
        system("cls");
    }

    cout << endl << endl;

    return 0;
}