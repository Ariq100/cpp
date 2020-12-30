#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string c1_name, c1_accNo, c1_nId, c1_phoneNo, c1_balance;
string c2_name, c2_accNo, c2_nId, c2_phoneNo, c2_balance;

void customer_1() 
{
    cout << "Enter your name: ";
    cin >> c1_name;
    cout << "\nEnter your Account number: ";
    cin >> c1_accNo;
    cout << "\nEnter your National Id number: ";
    cin >> c1_nId;
    cout << "\nEnter your phone number: ";
    cin >> c1_phoneNo;
    cout << "\nEnter your current balance in your account: ";
    cin >> c1_balance;

    cout << endl;
}

void data_1() 
{
    cout << "CUSTOMER 1 : " << endl;
    cout << "Name:- " << c1_name << endl;
    cout << "Account number:- " << c1_accNo << endl;
    cout << "NID:- " << c1_nId << endl;
    cout << "Phone number:- " << c1_phoneNo << endl;
    cout << "Balance:- " << c1_balance << endl << endl << endl;
}

void customer_2()
 {
    cout << "Enter your name: ";
    cin >> c2_name;
    cout << "\nEnter your Account number: ";
    cin >> c2_accNo;
    cout << "\nEnter your National Id number: ";
    cin >> c2_nId;
    cout << "\nEnter your phone number: ";
    cin >> c2_phoneNo;
    cout << "\nEnter your current balance in your account: ";
    cin >> c2_balance;

    cout << endl;

}

void data_2() 
{
    cout << "CUSTOMER 1 : " << endl;
    cout << "Name:- " << c2_name << endl;
    cout << "Account number:- " << c2_accNo << endl;
    cout << "NID:- " << c2_nId << endl;
    cout << "Phone number:- " << c2_phoneNo << endl;
    cout << "Balance:- " << c2_balance << endl << endl << endl;
}

void menu() 
{
    while (true)
    {
        char selection;

        cout << "MAIN MENU :- " << endl;
        cout << "1.ADD ACCOUNT" << endl;
        cout << "2.VIEW ACCOUNTS" << endl;
        cout << "3.WITHDRAW ACCOUNT" << endl;
        cout << "4.EXIT" << endl;

        cout << "\n\nSELECT: ";
        cin >> selection;

        system("cls");
        
        if (selection == '1') 
        {
            char custom_1;

            cout << "ADD ACCOUNT:-\n(a)Customer 1\n(b)Customer 2\nChoice: ";
            cin >> custom_1;

            system("cls");

            if (custom_1 == 'a') 
            {
                customer_1();
                system("Pause");
                system("cls");
            }

            else if (custom_1 == 'b')
            {
                customer_2();
                system("Pause");
                system("cls");
            }

            else 
            {
                cout << "\nINVALID INPUT! PLEASE CHECK.";
            }
        }

        else if (selection == '2') 
        {
            char custom_2;

            cout << "\nVIEW ACCOUNTS:- \n(a)customer 1 \n(b)Customer 2\nChoice: ";
            cin >> custom_2;

            system("cls");

            if (custom_2 == 'a') 
            {
                data_1();
                system("Pause");
                system("cls");
            }

            else if (custom_2 == 'b') 
            {
                data_2();
                system("Pause");
                system("cls");
            }

            else 
            {
                cout << "\nINVALID INPUT! PLEASE CHECK.";
            }
        }

        else if (selection == '4') 
        {
            cout << "\nTHANK YOU FOR USING !";
            break;
        }
        
        else if (selection == '3') 
        {
            char withdrawAcc;

            cout << "\nACCOUNTS:- \n(a)Customer 1\n(b)Customer 2\ntwhich account do you want to with draw? ";
            cin >> withdrawAcc;

            if (withdrawAcc == 'a') 
            {
                
            }
        }
    }
}

int main()
{
    // cout << "\n\n\t\t\tBANKING MANAGEMENT SYSTEM\n\n\t\t\t~~~~~~GROUP WORK~~~~~~\n\n\t\t\t";
    // system("Pause");
    system("cls");
    menu();

}