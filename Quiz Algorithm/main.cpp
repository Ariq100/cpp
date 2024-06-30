#include <iostream>
#include <vector>
using namespace std;

vector<string> questions;
vector<string> answers;

int InputQuestionsAnswers()
{
    string input;
    int NumOfQuestions = 0;

    while (input != "Done")
    {

        cout << "Enter a question." << endl;
        cin >> input;

        if(input == "Done")
        {
            break;
        }

        questions.push_back(input);
        NumOfQuestions = NumOfQuestions + 1;

        cout << "Enter the answer to the question.\n" << endl;
        cin >> input;

        answers.push_back(input);
        system("cls");
    }

    return NumOfQuestions;
}

bool MatchAnswers(string InputAnswer, int QuestionNum)
{
    if(InputAnswer == answers[QuestionNum])
    {
        cout << "Correct Answer!!" << endl;
        return true;
    }
    else 
    {
        Cout << "Wrong Answer!!" << endl;
        cout << "The Correct Answer to the question is " << answers[QuestionNum] << endl;
        return false;
    }

    system("cls");
}

int main()
{
    int NumOfQuestions, marks;
    bool decision;
    string input;
    cout << "Input questions and answers and after you finish type 'Done'." << endl;
    cout << "Note that Done should be typed as it is!!" << endl; 

    NumOfQuestions = InputQuestionsAnswers();

    cout << "Answer the questions" << endl;

    for(int index = 0; index < NumOfQuestions; index++)
    {
        cout << "Question:" << endl;
        cout << questions[index] << endl;
        cout << "Answer:" << endl;
        cin >> input;

        decision = MatchAnswers(input, index);

        if(decision == true)
        {
            marks = marks + 1;
        }
    }

    system("cls");
    cout << "You scored a total mark of " << mark << " out of " << NumOfQuestions << endl;

    return 0;
}