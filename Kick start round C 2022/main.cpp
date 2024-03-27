#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    bool uplow;
    string pass = "A22AAAAA";

    int passChar = pass.size();

    if (passChar <= 7)
    {
        for (int i = 0; i < 7; i++)
        {
            if (pass.size() <= 7)
            {
                pass = pass.append("a");
            }
            else
            {
                break;
            }
        }

        passChar = pass.size();
    }

    for (int i = 0; i < passChar; i++)
    {
        if (isupper(pass[i]))
        {
            uplow = false;
        }
        else
        {
            uplow = true;
        }
    }

    if (uplow == true)
    {
        pass = pass.append("A");
    }
    else
    {
        for (int i = 0; i < passChar; i++)
        {
            if (islower(pass[i]))
            {
                uplow = false;
            }
            else
            {
                uplow = true;
            }
        }

        if (uplow == true)
        {
            pass.append("a");
        }
    }


    for (int i = 0; i < passChar; i++)
    {
        if(isdigit(i))
        {
            
        }
    }



    cout << pass << endl;

    system("Pause");
    return 0;
}