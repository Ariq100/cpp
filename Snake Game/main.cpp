#include <iostream>
#include <cstdlib>
using namespace std;

string board_arr[12] = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "}
int score;
int CurrentPosition;

void DrawBoard()
{
    cout << "| " << board_arr[0] << " | " << board_arr[1] << " | " << board_arr[2] << " | " << board_arr[3] << " |" << endl;
    cout << "------------------" << endl;
    cout << "| " << board_arr[4] << " | " << board_arr[5] << " | " << board_arr[6] << " | " <<board_arr[7] << " |" << endl;
    cout << "------------------" << endl;
    cout << "| " << board_arr[8] << " | " << board_arr[9] << " | " << board_arr[10] << " | " <<board_arr[11] << " |" << endl;
    cout << "\n" << endl;
    cout << "Score: " << score << endl;
}

void movement(string input)
{
    int status; 

    switch (input)
    {
    case "Left":
        status = CurrentPosition - 1;
        if(status == -1)
        {
            WinOrLose(false);
        }
        else if(status == 3)
        {
            
        }
        break;
    
    default:
        break;
    }
}

bool WinOrLose(bool game)
{
    if(game == false)
    {
        return false;
    }
    else if (score == 10)
    {
        return true;
    }
}

int PointPosition()
{
    score = score + 1;
    int position;
    position = rand() % 9;

    while(board_arr[position != " "])
    {
        position = rand() % 9;
    }

    return position;
}

int main()
{



    return 0;
}