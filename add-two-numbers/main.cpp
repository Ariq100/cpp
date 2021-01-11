#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a, b, t;
    vector <int> d;

    cin >> t;

    for (int i = 0; i < t; i++){cin >> a >> b; d.push_back(a + b);}

    for (int i = 0; i < t; i++){cout << d[i] << endl;}

    return 0;
}