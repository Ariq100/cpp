#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int t, n, r = 0, m;
    vector<string> x;

    cin >> t;

    while(t > 0)
    {
        cin >> n;

        m = n;

        while(n != 0)
        {
            r = (r * 10) + (n % 10);
            n = n / 10;
        }
        
        if(m == r) x.push_back("wins");

        else x.push_back("loses");
        
        r = 0;
        t-- ;
        }

    for (int i = 0; i < x.size(); i++) cout << x[i] << endl;

	return 0;
}