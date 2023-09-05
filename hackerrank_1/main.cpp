#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    int sumOfElements = 0;
    vector<int> values;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;

        cin >> x;

        values.push_back(x); 
    }

    for (int i = 0; i < n; i++)
    {
        sumOfElements = sumOfElements + values[i];
        cout << sumOfElements;
    }

    cout << sumOfElements;

    system("Pause");
    system("cls");

    return 0;
}