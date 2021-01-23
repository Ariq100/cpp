#include <iostream>
#include "queue.cpp"
using namespace std;

char select;

void menu()
{
    cout << "Choose : " << endl;
    cout << "1. Display" << endl;
    cout << "2. Peek" << endl;
    cout << "3. Change" << endl;
    cout << "4. Exit" << endl;
}

int main()
{

    Queue first;

    first.enqueue(50);
    first.enqueue(10);
    first.enqueue(20);
    first.enqueue(1);
    first.enqueue(2);

    while (true)
    {

        menu();

        cout << "select : ";
        cin >> select;

        system("Pause");
        system("cls");

        if (select == '1') first.display();

        else if (select == '2')
        {
            int position;

            cout << "Enter which one do you want to peek?? : ";
            cin >> position;

            first.peek(position);
        }

        else if (select == '3')
        {
            int position, value;

            cout << "Enter the postion : ";
            cin >> position;

            cout << "Enter the value : ";
            cin >> value;

            first.change(position, value);
        }

        else if (select == '4') break;

        else cout << "Wrong Input!!!!" << endl;

        system("Pause");
        system("cls");
    }

    return 0;
}