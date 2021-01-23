#include <iostream>
using namespace std;

class Queue
{
    private:
        int head;
        int back;
        int a[5];

    public:
        Queue()
        {
            head = -1;
            back = -1;

            for(int i = 0; i < 5; i++)
            {
                a[i] = 0;
            }
        }

        bool isEmpty()
        {
            return (head == -1 && back == -1) ? true : false;
        }

        bool isFull()
        {
            return (back == 4) ? true : false;
        }
        
        void enqueue(int value)
        {
            if(isFull()) cout << "Queue Full." << endl;

            else if(isEmpty())
            {
                head = 0;
                back = 0;
                a[back] = value;
            }

            else 
            {
                back++;
                a[back] = value;
            }
        }

        int dequeue()
        {
            int temp;

            if (isEmpty())
            {
                cout << "Queue Empty." << endl;
                return 0;
            }

            else if (head == back)
            {
                temp = a[head];
                head = -1;
                back = -1;
                a[head] = 0;
                return temp;
            }

            else 
            {
                temp = a[head];
                a[head] = 0;
                head++;
                return temp;
            }
        }

        void display()
        {

            if (isEmpty()) cout << "There us nothing to print." << endl;

            else 
            {
                for (int i = 0; i < 5; i++) cout << a[i] << endl;
            }
        }

        void change (int n, int value)
        {
            if (isEmpty()) cout << "There is nothing to change." << endl;

            else
            {
                n = n - 1;

                cout << "Your value was changed from " << a[n];

                a[n] = value;

                cout << " to " << a[n] << endl;
            }
        }

        void peek (int n)
        {
            if (isEmpty()) cout << "Queue Empty." << endl;

            else
            {
                n = n - 1;

                cout << a[n] << endl;
            }
        }

        int count()
        {
            return (back + 1);
        }
};