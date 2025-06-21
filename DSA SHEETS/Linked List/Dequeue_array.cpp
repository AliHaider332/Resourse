#include<iostream>
using namespace std;

class Dequeue
 {
    int front, rear, size;
    int* arr;

public:
    Dequeue(int a ) 
    { 
        arr = new int[a];
        size = a;
        front = rear = -1;
    }

    bool isempty() 
    {
        return front == -1 && rear == -1;
    }

    void push_back(int a) 
    {
        if ((rear + 1) % size == front) 
        {
            cout << "Dequeue is full. Cannot push back." << endl;
            return;
        }
        if (isempty())
        {
            front = rear = 0;
            arr[rear] = a;
            cout << "The value " << a << " is pushed back in the dequeue" << endl;
        }
        else 
        {
            rear = (rear + 1) % size;
            arr[rear] = a;
            cout << "The value " << a << " is pushed back in the dequeue" << endl;
        }
    }

    void push_front(int a)
     {
        if ((front - 1 + size) % size == rear)
        {
            cout << "Dequeue is full. Cannot push front." << endl;
            return;
        }
        if (isempty()) 
        {
            front = rear = 0;
            arr[front] = a;
            cout << "The value " << a << " is pushed front in the dequeue" << endl;
        }
        else 
        {
            front = (front - 1 + size) % size;
            arr[front] = a;
            cout << "The value " << a << " is pushed front in the dequeue" << endl;
        }
    }

    void pop_front() 
    {
        if (isempty()) 
        {
            cout << "Dequeue is empty. Cannot pop front." << endl;
            return;
        }
        cout << "The value " << arr[front] << " is popped from the dequeue" << endl;
        if (front == rear) 
        {
            front = rear = -1;
        }
        else 
        {
            front = (front + 1) % size;
        }
    }

    void pop_back() 
    {
        if (isempty()) 
        {
            cout << "Dequeue is empty. Cannot pop back." << endl;
            return;
        }
        cout << "The value " << arr[rear] << " is popped from the dequeue" << endl;
        if (front == rear) 
        {
            front = rear = -1;
        }
        else 
        {
            rear = (rear - 1 + size) % size;
        }
    }
};

int main() {
    Dequeue dq(5);
    dq.push_back(1);
    dq.push_front(2);
    dq.push_back(3);
    dq.push_front(4);
    dq.pop_front();
    dq.pop_back();
    return 0;
}