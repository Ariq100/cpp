#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    vector<int> a;

    cin >> t;

    for (int j = 0; j < t; j++)
    {
        cin >> n;

            for (int i = n-1; i > 0; --i)
            {
                n = n * i;
            }

        a.push_back(n);
    }

    for (int i = 0; i < t; i++) cout << a[i] << endl;

    return 0;
}