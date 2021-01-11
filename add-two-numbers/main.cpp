#include <iostream>
using namespace std;

int main()
{
    int a, b, t;

    cin >> t;

    int z[t];

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;

        z[i] = a + b;
    }

    for (int i = 0; i < t; i++)
    {
        cout << z[i] << endl;
    }

    return 0;
}