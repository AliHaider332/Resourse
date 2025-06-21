#include<iostream>
using namespace std;

class QUEUE
{
    int *arr;
    int front;
    int rear;
    int size;
public:
    QUEUE(int a)
    {
        arr = new int[a];
        front = 0;
        rear = -1;
        size = a;
    }

    ~QUEUE()
    {
        delete[] arr;
    }

    void push(int value)
    {
        if (rear < size - 1)
        {
            rear++;
            arr[rear] = value;
            cout << "The value " << arr[rear] << " is pushed in queue" << endl;
        }
        else
        {
            cout << "Queue overflow" << endl;
        }
    }

    void pop()
    {
        if (front <= rear)
        {
            cout << "The value " << arr[front] << " is popped from queue" << endl;
            front++;
            if (front > rear)
            {
                front = 0;
                rear = -1;
            }
        }
        else
        {
            cout << "Queue underflow" << endl;
        }
    }

    void issize()
    {
        int j = rear - front + 1;
        if (j < 0)
        {
            cout << "Queue is empty" << endl;
        }
        else
        {
            cout << "The size of the queue is: " << j << endl;
        }
    }

    bool isempty()
    {
        return rear < front;
    }

    int peek()
    {
        if (!isempty())
        {
            return arr[rear];
        }
        return -1; // Return a sentinel value if the queue is empty
    }
};

int main()
{
    QUEUE a(4);
    a.issize();
    a.push(9);
    a.issize();
    a.push(22);
    a.push(111);
    a.issize();
    a.pop();
    a.issize();

    return 0;
}
