#include <iostream>
#include <vector>
#include <string>
using namespace std;

void street()
{
    int s;
    vector<string> sName;
    vector<string> intersection;
    vector<int> l;
    cin >> s;

    for (int i = 0; i < 5; i++)
    {
        string x;
        getline(cin, x);
        // cin >> x;

        intersection.push_back(x); 

        // getline(cin, x);

        // sName.push_back(x);

        // int z;
        // cin >> z;

        // l.push_back(z);
    }

    for (int i = 0; i < sizeof(intersection); i++) cout << intersection[i] << endl;

    // for (int i = 0; i < size; i++) cout << sName[i] << endl;
}

int main()
{
    // int d, i, v, f;

    // cin >> d;
    // cin >> i;

    street();

    // cin >> s;
    // cin >> v;
    // cin >> f;

    // cout << d << i << s << v << f;

    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> a;
//     int vSize;
//     cin >> vSize;

//     for(int i = 0; i < vSize; i++)
//     {
//         int x;
//         cin >> x;
//         a.push_back(x);
//     }

//     cout << "\nSize of the vector: " << a.size() << endl;

//     for(int i = 0; i < vSize; i++)
//     {
//         cout << a[i] << endl;
//     }

//     return 0;
// }