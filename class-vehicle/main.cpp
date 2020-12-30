#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    public:
        string model;
        string color;
        int year;

        void info()
        {
            cout << "The model of the car is : " << model << endl;
            cout << "The color of the car is : " << color << endl;
            cout << "The year of the car is : " << year << endl;
        }

        void accelarate()
        {
            cout << model << " is accelarating." << endl;
        }

        void accelarating()
        {
            cout << "A " << color << " " << year << " " << model << " is accelarating very fast." << endl; 
        }
};

int main()
{
    Vehicle bike;

    bike.model = "R6";
    bike.color = "Blue";
    bike.year = 2020;

    bike.info();

    bike.accelarate();

    cout << endl;

    bike.accelarating();

    cout << endl;

    Vehicle sedan;

    sedan.model = "E36";
    sedan.color = "Dark Green";
    sedan.year = 2005;

    sedan.info();

    sedan.accelarate();

    cout << endl;

    sedan.accelarating();

    cout << endl;

    Vehicle semi;

    semi.model = "Tesla";
    semi.color  = "Grey";
    semi.year = 2019;

    semi.info();

    semi.accelarate();

    cout << endl;

    semi.accelarating();

    return 0;
}