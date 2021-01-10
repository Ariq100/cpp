# include <iostream>
using namespace std;

int main(){

    int n, k, t, result = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> t; 

        if (t % k == 0) result = result + 1;  
    }

    cout << result << endl;

    return 0;
}