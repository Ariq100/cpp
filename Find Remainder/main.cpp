#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, t;
    vector<int> x;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;

        x.push_back(a % b);
    }

    for (int i = 0; i < t; i++)
    {
        cout << x[i] << endl;
    }

    return 0;
}