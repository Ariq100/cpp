#include <iostream>
#include <vector>
using namespace std;

vector<string> questions;
vector<string> answers;

int InputQuestionsAnswers()
{
    string input;
    int QeustionNum;

    while (input != "Done")
    {

        cout << "Enter a question." << endl;
        cin << input;

        if(input == "Done")
        {
            break;
        }

        questions.push_back(input);
        QeustionNum = QeustionNum + 1;

        cout << "Enter the answer to the question.\n" << endl;
        cin << input;

        answers.push_back(input);
    }

    return QeustionNum;
}

bool MatchAnswers(string InputAnswer)
{
    if(InputAnswer == )
}

void()

int main()
{
    cout << "Input questions and answers and after you finish type "Done"." << endl;
    cout << "Note that Done should be typed as it is!!" << endl; 

    
}