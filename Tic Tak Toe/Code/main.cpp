#include <iostream>
#include <cstdlib>
using namespace std;

string input_arr[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
string UserInput[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
string ComInput[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

void DrawBoard()
{
    cout << input_arr[0] << " | " << input_arr[1] << " | " input_arr[2] << endl;
    cout << "---------" << endl;
    cout << input_arr[3] << " | " << input_arr[4] << " | " input_arr[5] << endl;
    cout << "---------" << endl;
    cout << input_arr[6] << " | " << input_arr[7] << " | " input_arr[8] << endl;
}

bool CheckBoard(int input)
{
    if(input_arr[input] != " ")
    {
        return false;
    }
    else 
    {
        return true;
    }
}

bool CheckWinOrDraw()
{
    
}

int main()
{
    int input.slot;
    bool decided = false;

    while (decided == false)
    {       
        DrawBoard();
        cout << "Input which slot do you want to cross" << endl;
        cin >> input.slot;

        system.cls();
        while(CheckBoard(input.slot) == false)
        {
            DrawBoard();
            cout << "Cannot cross there, enter again!!" << endl;
            cin >> input.slot;
            system.cls();
        }

        input_arr[input.slot] = " X ";
        DrawBoard();
        system.cls();

        input.slot = rand() % 9;

        while(CheckBoard(input.slot) == false)
        {
            input.slot = rand() % 9;
        }

        input_arr[input.slot] = " O ";
    }
    
    return 0;
}