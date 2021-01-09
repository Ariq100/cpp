#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
    string studentID, studentNAME, school, studentHeight;
    int studentAge;

    public:
    void setStudentName(string n)
    {
        studentNAME = n;
    }

    string getStudentName()
    {
        return studentNAME;
    }

    void setStudentHeight(int h)
    {
        studentHeight = h;
    }

    string getStudentHeight()
    {
        return studentHeight;
    }

    void setStudentAge(int a)
    {
        studentAge = a;
    }

    int getStudentAge()
    {
        return studentAge;
    }

    void setId(string id) 
    {
        studentID = id;
    }

    string getId()
    {
        return studentID;
    }

    void setSchool(string s)
    {
        school = s;
    }

    string getSchool()
    {
        return school;
    }
};

int main()
{
    string stuffs[5] = {"Name : ", "Height : ", "Age : ", "Id : ", "School : "};

    system("cls");

    Student student[5];

    int size = sizeof(student) / sizeof(student[0]);

    for (int i = 0; i < size; i++)
    {
        string n;

        for (int j = 0; j < 1; j++)
        {
            cout << stuffs[i];
        }

        getline(cin, n);

        student[i].setStudentName(n);

        cout << endl;
    }

    system("cls");

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < 1; j++)
        {
            cout << stuffs[i];
        }

        cout << student[i].getStudentName() << endl;;
    }

    return 0;
}