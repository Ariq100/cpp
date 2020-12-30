#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string c1_name, c1_accNo, c1_nId, c1_phoneNo;
string c2_name, c2_accNo, c2_nId, c2_phoneNo; 
float c2_balance, c1_balance, deposit1, withdraw1;

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

// deposit feature for 1st customer
void deposit_1()
{
    cout << "Previous Amount : " << c1_balance << endl;
    
    cout << "Enter the ammoiunt that you want to deposit : ";
    cin >> deposit1;

    c1_balance = c1_balance + deposit1;

    cout << "Your value now is : " << c1_balance << endl;
}

// deposit feature for 2nd customer
void deposit_2()
{
    cout << "Previous Amount : " << c2_balance << endl;
    
    cout << "Enter the ammoiunt that you want to deposit : ";
    cin >> deposit1;

    c2_balance = c2_balance + deposit1;

    cout << "Your value now is : " << c2_balance << endl;
}

// withdraw feature for 1st customer
void withdraw_1()
{
    cout << "Previous Amount : " << c1_balance << endl;
    
    cout << "Enter the ammount that you want to withdraw : ";
    cin >> withdraw1;

    c1_balance = c1_balance - withdraw1;

    cout << "Your value now is : " << c1_balance << endl;
}

// withdraw feature for 2nd customer
void withdraw_2()
{
    cout << "Previous Amount : " << c2_balance << endl << endl;
    
    cout << "Enter the ammoiunt that you want to withdraw : ";
    cin >> withdraw1;

    c2_balance = c2_balance - withdraw1;

    cout << "Your value now is : " << c2_balance << endl << endl;
}

void delete_1()
{
    c1_name.clear();
    c1_accNo.clear();
    c1_nId.clear();
    c1_phoneNo.clear();
    c1_balance = 0;

}

void delete_2()
{
    c2_name.clear();
    c2_accNo.clear();
    c2_nId.clear();
    c2_phoneNo.clear();
    c2_balance = 0;
}

// menu also the main function
void menu() 
{
    while (true)
    {
        char selection;

        cout << "MAIN MENU :- " << endl;
        cout << "1.ADD ACCOUNT" << endl;
        cout << "2.VIEW ACCOUNTS" << endl;
        cout << "3.WITHDRAW ACCOUNT" << endl;
        cout << "4.DEPOSIT ACCOUNT" << endl;
        cout << "5.DELETE ACCOUNT" << endl;
        cout << "6.EXIT" << endl;

        cout << "\n\nSELECT: ";
        cin >> selection;

        system("cls");
        
        if (selection == '1') 
        {
            char custom_1;

            cout << "ADD ACCOUNT:-\n1.(a)Customer \n2.(b)Customer \nChoice: ";
            cin >> custom_1;

            system("cls");

            if (custom_1 == 'a' || custom_1 == '1') 
            {
                customer_1();
            }

            else if (custom_1 == 'b' || custom_1 == '2')
            {
                customer_2();
            }

            else 
            {
                cout << "\nINVALID INPUT! PLEASE CHECK.";
            }
        }

        else if (selection == '2') 
        {
            char custom_2;

            cout << "\nVIEW ACCOUNTS:- \n1.(a)customer \n2.(b)Customer 2\nChoice: ";
            cin >> custom_2;

            system("cls");

            if (custom_2 == 'a' || custom_2 == '1') 
            {
                data_1();
            }

            else if (custom_2 == 'b' || custom_2 == '2') 
            {
                data_2(); 
            }

            else 
            {
                cout << "\nINVALID INPUT! PLEASE CHECK.";
            }
        }

        else if (selection == '3') 
        {
            char withdrawAcc;

            cout << "\nACCOUNTS:- \n1.(a)Customer \n2.(b)Customer \n  which account do you want to with draw from? ";
            cin >> withdrawAcc;

            if (withdrawAcc == 'a' || withdrawAcc == '1')
            {
                withdraw_1();
            }

            else if (withdrawAcc == 'b' || withdrawAcc == '2')
            {
                withdraw_2();
            }
        }

        else if (selection == '4')
        {
            char deposit2;

            cout << "\nACCOUNTS:- \n1.(a)Customer \n2.(b)Customer \n  which account do you want to deposit to? : ";
            cin >> deposit2;

            if (deposit2 == '1' || deposit2 == 'a')
            {
                deposit_1();
            }

            else if (deposit2 == '2' || deposit2 == 'b')
            {
                deposit_2();
            }
        }

        else if (selection == '5')
        {
            char delete1;

            cout << "(BECAREFUL THE ACCOUNT WILL BE DELETED PERMANENTLY)" << endl;
            cout << "\nACCOUNTS:- \n1.(a)Customer \n2.(b)Customer \n  which account do you want to delete : ";
            cin >> delete1;

            if (delete1 == 'a' || delete1 == '1')
            {
                delete_1();
            }

            else if (delete1 == 'b' || delete1 == '2')
            {
                delete_2();
            }
        }
        
        else if (selection == '6') 
        {
            cout << "\nTHANK YOU FOR USING !";
            break;
        }

        else
        {
            cout << "Invalid Input!!!! TRY AGAIN" << endl;
        }

        system("Pause");
        system("cls");
    }
}

int main()
{
    cout << "\nBANKING MANAGEMENT SYSTEM\n\n~~~~~~GROUP WORK~~~~~~\n\n";

    system("Pause");
    system("cls");

    menu();

    return 0;
}