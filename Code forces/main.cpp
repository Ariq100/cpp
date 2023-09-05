// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std; 

int main() {
    int t;
    vector<int> a;
    int n;
    int i, x;
    
    cin >> t;
    
    for (i = 0; i < t; i++)
    {
        cin >> n;
        if ( 1 <= n <= 50)
        {
            for (x = 0; x < n; x++)
            {
                cin >> a[x];
            };
            
            cout << (max[a[]] - min[a[]]) << endl;
        }
    };

    return 0;
}