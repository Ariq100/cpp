//m0r_EzZz's version

#include <iostream>
#include <string>
using namespace std;

char select, select1, option;
// string team1, team2, team3;
string onion = "onion",pepper = "pepper", mushroom = "mushroom", olive = "olive", basil = "basil", chicken = "chicken", tomato = "tomato";

// class Pizza
// {
//     private:
//         int onion, pepper, mushroom, olive, basil, chicken, tomato;

//     public :
//         void setOnion(int p0) {onion = p0;} int onion() { return onion; }

//         void setPepper(int p1) {pepper = p1;} int getpepper() {return pepper;}

//         void setMushroom(int p2) {mushroom = p2;} int getMushroom() {return mushroom;}

//         void setolive(int p3) {olive = p3;} int getolive() { return olive;}

//         void setBasil(int p4) {basil = p4;} int getBasil() {return basil;}

//         void setChicken(int p5) {chicken = p5;} int getChicken() {return chicken;} 

//         void setTomato(int p6) {tomato = p6;} int getTomato() {return tomato;}
// };

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