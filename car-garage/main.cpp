 #include <iostream>
 using namespace std;

class Park
{
    private:
        int top, free, code;
        int parking[5];

    public:
        Stack()
        {
            top = -1;
            for (int i = 0; i < 5; i++) parking[i] = 0;
        }

        bool isEmpty() return (top == -1) ? true : false;

        bool isFull() return (top == 4) ? true : false;

        void park(int car) return (isFull()) ? cout << "All the parking is filled." << endl; else  int car
};

 int main()
 {

 }