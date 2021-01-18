#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    cout << ceil(((float)n * 2) / (float)k);
    return 0;
}