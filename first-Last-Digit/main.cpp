#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t, n;
    vector<int> a;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        // sort(n.begin(), n.end());

        a.push_back(sort(n.begin() + n.end()));
    }

    for (int i = 0; i < a.size(); i++) cout << a[i] << endl;

    return 0;
}