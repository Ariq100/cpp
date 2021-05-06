#include <iostream>
using namespace std;

int main()
{
    string street = {1, 1, 2, 3, 3, 2, 2, 4, 4, 4};

    int size = sizeof(street) / sizeof(street[0]);

    for (int i = 0; i < size; i++)
    {
        if (street[i] == 1)
        {
            cout << "street 1 : " << true << endl;
            time_t time (3);        
        }

        else if (street[i] == 2)
        {
            cout << "street 2 : " << true << endl;
        }
    }
}