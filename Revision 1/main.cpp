#include <iostream>
#include <string>
using namespace std; 

double subtract(double x, double y) 
{
    cout << x - y << endl;
}

double divide(double x, double y) 
{
    cout << x / y << endl;
}

double multiply(double x, double y) 
{
    cout << x * y << endl;
}

double add(double x, double y) 
{
    cout << x + y << endl;
}

void execution(double x, double y, char op)
{
    if (op == '+')
    {
        cout << "x + y = ";
        add(x, y);
    }    
    else if (op == '-')
    {
        cout << "x - y = ";
        subtract(x, y);
    }
    else if (op == '*')
    {
        cout << "x * y = ";
        multiply(x, y);
    }
    else if (op == '/')
    {
        cout << "x / y = ";
        divide(x, y);
    }
    else
    {
        cout << "Wrong input!!" << endl;
    }
}

int main()
{
    double x;
    double y;
    char op;
    char input;

    cout << "Enter Value 1 = ";
    cin >> x;
    
    cout << "Enter Value 2 = ";
    cin >> y;

    cout << "Enter operator = ";
    cin >> op;

    execution(x, y, op);

    cout << "Do you want to do another calculation?\nIf yes then press Y if no then press N :" << endl;
    cin >> input;

    if (input == 'Y')
    {
        cout << "\n\n" << endl;
        main();
    }
    else if (input == 'N')
    {
        exit;
    }
    else
    {
        cout << "Wrong input!!" << endl;
    }

    system("pause");

    return 0;
}