# include "iostream"
# include "cmath"
# include "vector"
using namespace std;

int main()
{
    int t, n;
    vector<int> a;

    cin >> t;

    for (int i = 0; i < t; i++) {cin >> n; a.push_back(sqrt(n));}

    for (int i = 0; i < t; i++) cout << a[i] << endl;

    return 0;
}