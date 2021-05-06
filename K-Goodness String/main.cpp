#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> y;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string s;

        while(true)
        {
            cin >> s;

            if (s.length() == n)
            {
                break;
            }
        }

        for (int j = 0; j == ((k - j) == 1); j++)
        {
            if (k == 1)
            {
                y.push_back(0);
            }
            else
            {
                y.push_back(j);
            }
        }
    }

    for (int x = 1; x < t+1; x++) cout << "Case #" << x << ": " << y[x] << endl;

    return 0;
}