#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

string c1_name, c1_accNo, c1_nId, c1_phoneNo;
string c2_name, c2_accNo, c2_nId, c2_phoneNo; 
float c2_balance, c1_balance, deposit1, withdraw1;

void customer_1() 
{
    cout << "\n\n\t\t\tEnter your name: ";
    cin >> c1_name;
    cout << "\n\n\t\t\tEnter your Account number: ";
    cin >> c1_accNo;
    cout << "\n\n\t\t\tEnter your National Id number: ";
    cin >> c1_nId;
    cout << "\n\n\t\t\tEnter your phone number: ";
    cin >> c1_phoneNo;
    cout << "\n\n\t\t\tEnter your current balance in your account: ";
    cin >> c1_balance;

    cout << endl;
}

void data_1() 
{
    cout << "\n\n\t\tCUSTOMER 1 : " << endl;
    cout << "\n\n\t\t\tName:- " << c1_name << endl;
    cout << "\n\n\t\t\tAccount number:- " << c1_accNo << endl;
    cout << "\n\n\t\t\tNID:- " << c1_nId << endl;
    cout << "\n\n\t\t\tPhone number:- " << c1_phoneNo << endl;
    cout << "\n\n\t\t\tBalance:- " << c1_balance << endl << endl << endl;
}

void customer_2()
 {
    cout << "\n\n\t\t\tEnter your name: ";
    cin >> c2_name;
    cout << "\n\n\t\t\tEnter your Account number: ";
    cin >> c2_accNo;
    cout << "\n\n\t\t\tEnter your National Id number: ";
    cin >> c2_nId;
    cout << "\n\n\t\t\tEnter your phone number: ";
    cin >> c2_phoneNo;
    cout << "\n\n\t\t\tEnter your current balance in your account: ";
    cin >> c2_balance;

    cout << endl;

}

void data_2() 
{
    cout << "\n\n\t\tCUSTOMER 2 : \n\n";
    cout << "\n\n\t\t\tName:- " << c2_name << endl;
    cout << "\n\n\t\t\tAccount number:- " << c2_accNo << endl;
    cout << "\n\n\t\t\tNID:- " << c2_nId << endl;
    cout << "\n\n\t\t\tPhone number:- " << c2_phoneNo << endl;
    cout << "\n\n\t\t\tBalance:- " << c2_balance << endl << endl << endl;
}

// deposit feature for 1st customer
void deposit_1()
{
    cout << "\n\n\t\t\tPrevious Amount : " << c1_balance << endl << endl;

    cout << "\n\n\t\t\tEnter the amount that you want to deposit : ";
    cin >> deposit1;

    c1_balance = c1_balance + deposit1;

    cout << "\n\n\n\t\t\tYour amount now is : " << c1_balance << endl << endl;
}

// deposit feature for 2nd customer
void deposit_2()
{
    cout << "\n\n\t\t\tPrevious Amount : " << c1_balance << endl << endl;

    cout << "\n\n\t\t\tEnter the amount that you want to deposit : ";
    cin >> deposit1;

    c1_balance = c1_balance + deposit1;
    
    cout << "\n\n\n\t\t\tYour amount now is : " << c1_balance << endl << endl;
}

// withdraw feature for 1st customer
void withdraw_1()
{
    cout << "\n\n\t\tPrevious Amount : " << c1_balance << endl;

    cout << "\n\n\t\tEnter the amount that you want to withdraw : ";
    cin >> withdraw1;

    c1_balance = c1_balance - withdraw1;

    cout << "\n\n\t\tYour amount now is : " << c1_balance << endl;;
}

// withdraw feature for 2nd customer
void withdraw_2()
{
    cout << "Previous Amount : " << c2_balance << endl << endl;
    
    cout << "Enter the amount that you want to withdraw : ";
    cin >> withdraw1;

    c2_balance = c2_balance - withdraw1;

    cout << "Your amount now is : " << c2_balance << endl << endl;
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

        cout << "\n\n\t\t\tMAIN MENU :- \n\n";
        cout << "\n\n\t\t\t1.ADD ACCOUNT\n";
        cout << "\n\n\t\t\t2.VIEW ACCOUNTS\n";
        cout << "\n\n\t\t\t3.WITHDRAW ACCOUNT\n";
        cout << "\n\n\t\t\t4.DEPOSIT AMOUNT\n";
        cout << "\n\n\t\t\t5.DElETE\n";
        cout << "\n\n\t\t\t6.EXIT\n";

        cout << "\n\n\n\t\t\tSELECT: ";
        cin >> selection;

        system("cls");
        
        if (selection == '1') 
        {
            char custom_1;

            cout << "\n\n\t\tADD ACCOUNT:-\n\n\t\t1.(a)Customer \n\n\t\t2.(b)Customer \n\n\t\tChoice: ";
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
                cout << "\n\n\t\t\tINVALID INPUT! PLEASE CHECK.\n\n";
            }
        }

        else if (selection == '2') 
        {
            char custom_2;

            cout << "\n\n\t\tVIEW ACCOUNTS:- \n\n\t\t1.(a)customer \n\n\t\t2.(b)Customer 2\n\n\t\twhich account you want to view from?? : ";
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
                cout << "\n\n\t\t\tINVALID INPUT! PLEASE CHECK.\n\n";
            }
        }

        else if (selection == '3') 
        {
            char withdrawAcc;

            cout << "\n\n\t\tACCOUNTS:- \n\n\t\t1.(a)Customer \n\n\t\t2.(b)Customer \n\n\t\twhich account do you want to withdraw from : ";
            cin >> withdrawAcc;

            if (withdrawAcc == 'a' || withdrawAcc == '1')
            {
                withdraw_1();
            }

            else if (withdrawAcc == 'b' || withdrawAcc == '2')
            {
                withdraw_2();
            }

            else
            {
                cout << "\n\n\t\t\tINVALID INPUT! PLEASE CHECK.\n\n";
            }
            
        }

        else if (selection == '4')
        {
            char deposit2;

            cout << "\n\n\t\tACCOUNTS:- \n\n\t\t1.(a)Customer \n\n\t\t2.(b)Customer \n\n\t\twhich account do you want to deposit to : ";
            cin >> deposit2;

            if (deposit2 == '1' || deposit2 == 'a')
            {
                deposit_1();
            }

            else if (deposit2 == '2' || deposit2 == 'b')
            {
                deposit_2();
            }

            else
            {
                cout << "\n\n\t\t\tINVALID INPUT! PLEASE CHECK.\n\n";
            }
            
        }

        else if (selection == '5')
        {
            char delete1;

            cout << "\n\n\t\t(BECAREFUL THE ACCOUNT WILL BE DELETED PERMANENTLY)" << endl;
            cout << "\n\n\t\tACCOUNTS:- \n\n\t\t1.(a)Customer \n\n\t\t2.(b)Customer \n\n\t\twhich account do you want to delete : ";
            cin >> delete1;

            if (delete1 == 'a' || delete1 == '1')
            {
                delete_1();
            }

            else if (delete1 == 'b' || delete1 == '2')
            {
                delete_2();
            }

            else
            {
                cout << "\n\n\t\t\tINVALID INPUT! PLEASE CHECK.\n\n";
            }
        }
        
        else if (selection == '6') 
        {
            cout << "\n\n\n\n\t\t\tTHANK YOU FOR USING ! \n\n\n\n";
            break;
        }

        else
        {
            cout << "\n\n\t\t\tINVALID INPUT! PLEASE CHECK.\n\n";
        }

        system("Pause");
        system("cls");
    }
}

int main()
{
    cout << "\n\n\t\t\tBANKING MANAGEMENT SYSTEM\n\n\t\t\t~~~~~~GROUP WORK~~~~~~\n\n\t\t\t" << endl;

    system("Pause");
    system("cls");

    menu();

    return 0;
}