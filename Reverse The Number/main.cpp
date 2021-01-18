#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) 
    {
	    int n;
	    int n1 = 0;
	    cin >> n;

	    while (n) {
	        n1 = (n1 * 10) + (n % 10);
	        n = n / 10;
	    }
	    cout << n1 << endl;
	}
	return 0;
}