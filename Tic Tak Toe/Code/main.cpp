#include <iostream>
#include <cstdlib>
using namespace std;

string input_arr[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

void DrawBoard()
{
    cout << input_arr[0] << " | " << input_arr[1] << " | " << input_arr[2] << endl;
    cout << "---------" << endl;
    cout << input_arr[3] << " | " << input_arr[4] << " | " << input_arr[5] << endl;
    cout << "---------" << endl;
    cout << input_arr[6] << " | " << input_arr[7] << " | " << input_arr[8] << endl;
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

string CheckWinOrDraw()
{
    string win;

    for(int i = 0; i < 3; i++)
    {
        if((input_arr[i] == input_arr[i+1]) && (input_arr[i] == input_arr[i + 2]))
        {
            win = input_arr[i];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if((input_arr[i] == input_arr[i+3]) && (input_arr[i] == input_arr[i+6]))
        {
            win = input_arr[i];
        }
    }

    if((input_arr[0] == input_arr[4]) && (input_arr[0] == input_arr[8]))
    {
        win = input_arr[1];
    }
    else if((input_arr[2] == input_arr[4]) && (input_arr[2] == input_arr[6]))
    {
        win = input_arr[2];
    }

    return win;
}

int main()
{
    int input_slot;
    bool decided = false;
    string win;

    win = " ";

    while (decided == false)
    {
        DrawBoard();
        cout << "Input which slot do you want to cross" << endl;
        cin >> input_slot;

        system("CLS");
        while(CheckBoard(input_slot) == false)
        {
            DrawBoard();
            cout << "\n\nCannot cross there, enter again!!" << endl;
            cin >> input_slot;
            system("CLS");
        }

        input_arr[input_slot] = "X";
        DrawBoard();
        system("CLS");

        input_slot = rand() % 9;

        while(CheckBoard(input_slot) == false)
        {
            input_slot = rand() % 9;
        }

        input_arr[input_slot] = "O";

        win = CheckWinOrDraw();

        if(win != " ")
        {
            decided = true;
        }
    }

    if(win == "X")
    {
        cout << "You Win!!!" << endl;
    }
    else 
    {
        cout << "You suck!!" << endl;
    }
    
    return 0;
}