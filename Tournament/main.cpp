#include <iostream>
using namespace std;

int main()
{
    int value1;
    int value2;
    string z;
    string con;

    cout <<  "\nPlease Enter The value Correctly to run the prigram perfectly." << endl;
    cout << "Enter first value: ";
    cin >> value1;

    cout << "Enter second value: ";
    cin >> value2;

    cout << "Enter a operator: ";
    cin >> z;

    if (z == "+")
    {
        cout << value1 << " + " << value2 << " = " << value1 + value2 << endl;
    }

    else if (z == "-")
    {
        cout << value1 << " - " << value2 << " = " << value1 - value2 << endl;
    } 

    else if (z == "*")
    {
        cout << value1 << " * " << value2 << " = " << value1 * value2 << endl;
    }

    else if (z == "/")
    {
        cout << value1 << " / " << value2 << " = " << value1 / value2 << endl;
    }

    else
    {
        cout << "\nWrong input" << endl;
    }

    cout << "\nDo you want to continue = ";
    cin >> con;

    if (con == "yes")
    {
        main();
    }

    else
    {
        exit;
    }
    


    return 0;
}
