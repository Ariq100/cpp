//Imam's vresion

# include <iostream>
# include <string>
using namespace std;

char select, option;
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
}

// void members(){
//     char members;
//     while (true)
//     {
//         cout << "How many members do you have : ";
//         cin >> members;
//         if (members == '1'){
//             break;
//         }
//         else if (members == '2' || members == '3' || members == '4') {
//             break;
//         }
//     }
// }

void order(){
    while (true)
    {
        menu();
        cout << "which pizza do u want to order? ";
        cin >> select;

        if (select == '0'){

            cout << "ingredients: 1.onion, 2.pepper, 3.olive" << endl;
            cout << "which ingredient do you want to avoid? ";
            cin >> option;

            if (option == '1'){
                cout << "onion has been removed from your ingredient......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
            else if (option == '2')
            {
                cout << "pepper has been removed from your ingredients......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
            else if (option == '3'){
                cout << "olive has been removed from your ingredients......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
        }
        else if (select == '1'){

            cout << "ingredients: 1.mushroom, 2.tomato, 3.basil" << endl;
            cout << "which ingredient do you want to avoid? ";
            cin >> option;

            if (option == '1'){
                cout << "mushroom has been removed from your ingredient......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
            else if (option == '2'){
                cout << "tomato has been removed from your ingredients......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
            else if (option == '3'){
                cout << "basil has been removed from your ingredients......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
        }
        else if(select == '2'){

            cout << "ingredients: 1.chicken, 2.mushroom, 3.pepper" << endl;
            cout << "which ingredient do you want to avoid? ";
            cin >> option;

            if (option == '1'){
                cout << "chicken has been removed from your ingredient......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
            else if (option == '2'){
                cout << "mushroom has been removed from your ingredients......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
            else if (option == '3'){
                cout << "pepper has been removed from your ingredients......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
            
        }
        else if(option == '3'){

            cout << "ingredients: 1.tomato, 2.mushroom, 3.basil" << endl;
            cout << "which ingredient do you want to avoid? ";
            cin >> option;

            if (option == '1'){
                cout << "tomato has been removed from your ingredient......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
            else if (option == '2'){
                cout << "mushroom has been removed from your ingredients......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
            else if (option == '3'){
                cout << "basil has been removed from your ingredients......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
        }
        else if (option == '4'){

            cout << "ingredients: 1.chicken, 2.basil" << endl;
            cout << "which ingredient do you want to avoid? ";
            cin >> option;

            if (option == '1'){
                cout << "chiken has been removed from your ingredient......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
            else if (option == '2'){
                cout << "basil has been removed from your ingredients......" << endl;
                cout << "........Your order has been recorded......." << endl;
            }
        }
}

void order1() {

    while (true)
    {
        if (select == '0'){
            cout << "Pizza 0 has the given ingredients 1.onion, 2.pepper, 3.olive" << end;
        }
    }
}