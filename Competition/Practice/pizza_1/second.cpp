//m0r_EzZz's version

#include <iostream>
#include <string>
using namespace std;

char select, select1, option;
string team1, team2, team3;

class Pizza
{
    private:
        int pizza0, pizza1, pizza2, pizza3, pizza4;

    public:
        void setPizza0(int p0) {pizza0 = p0;} int getPizza0() {return pizza0;}

        void setPizza1(int p1) {pizza1 = p1;} int getPizza1() {return pizza1;}

        void setPizza2(int p2) {pizza2 = p2;} int getPizza2() {return pizza2;}

        void setPizza3(int p3) {pizza3 = p3;} int getPizza3() { return pizza3;}

        void setPizza4(int p4) {pizza4 = p4;} int getPizza4() {return pizza4;}
};

void menu()
{
    cout << "Pizza 0: onion, pepper, olive" << endl;
    cout << "Pizza 1: mushroom, tomato, basil" << endl;
    cout << "Pizza 2: chicken, mushroom, pepper" << endl;
    cout << "Pizza 3: tomato, mushroom, basil" << endl;
    cout << "Pizza 4: chicken, basil" << endl;
    cout << "5.Exit" << endl;
}

void order()
{
    while (true)
    {
        menu();
        cout << "Choose a pizza : ";
        cin >> select;

        system("Pause");
        system("cls");

        if (select == '0')
        {
            select1 = select;
            cout << "onion, pepper, olive" << endl;
            cout << "Your order has been taken............." << endl;
        }

        else if (select == '2')
        {
            if (select == select1)
            {
                select1 = select;
                cout << "chicken, mushroom, pepper" << endl;
                cout << "Your order has been taken............" << endl;
            }
            else if (select != select1)
            {
                select1 = select;
                cout << "chicken, mushroom, no pepper(is already on pizza 0)" << endl;
                cout << "Your order has been taken............" << endl;
            }
        }
        else if (select == '3')
        {
            if (select == select1)
            {
                select1 = select;
                cout << "tomato, mushroom, basil" << endl;
                cout << "Your order has been taken............" << endl;
            }
            else if (select != select1)
            {
                select1 = select;
                cout << "tomato, no mushroom(is already on pizza 2), basil" << endl;
                cout << "Your order has been taken............" << endl;
            }
        }
        else if (select == '5')
        {
            cout << "Thanks for using!!!!!!" << endl;
            break;
        }

        system("Pause");
        system("cls");
    }
}