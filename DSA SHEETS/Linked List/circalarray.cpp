#include<iostream>
using namespace std;
class queue
{
    int *arr;
    int front,rear,size;
    public:
    queue(int a)
    {
        arr=new int [a];
        front=rear=-1;
        size=a;
    }
    bool isempty()
    {
        // cout << "The Queue is empty." << endl;
        return rear == -1;
    }

    int issize()
    {
        if (isempty()) 
        {
            cout << "The Queue is empty." << endl;
            return 0;
        } 
        else
        {
            if (rear >= front)
            {
                return rear - front + 1;
            }
            else
            {
                return size - front + rear + 1;
            }
        }
    }
    void push(int x)
    {
        if(isempty())
        {
            front=rear=0;
            // cout<<"The value of  "<<x<<" is pushed:  "<<endl;
            arr[rear]=x;
        }
        else if (  (rear+1)%size==front)
        {
            cout<<"Queue is overflowed:  "<<endl;
        }
        else
        {
            
            rear=(rear+1)%size;
            // if(rear==front)
            // {
            //     rear=front=-1;
            //     return;
            // }
            cout<<"The value of  "<<x<<" is pushed:  "<<endl;
            arr[rear]=x;
        }
        
    }
    void pop()
    {
        if(isempty())
        {
            cout<<"Queue is underflow:   "<<endl;
        }
        else
        {
            cout<<"The value of  "<<arr[front]<<" is poped:  "<<endl;
            if (front == rear)
            {
                front = rear = -1; // Queue is now empty
            } 
            else 
            {
                front = (front + 1) % size;
            }
        }
    }
    void first() 
    {
        if (!isempty()) 
        {
            cout << "The first element is: " << arr[front] << endl;
        } 
        else 
        {
            cout << "The Queue is empty." << endl;
        }
    }
};
int main()
{
    queue a(4);
    // a.issize();
    a.push(9);
    // a.issize();
    a.push(22);
    a.push(111);
    // a.issize();
    a.pop();
    a.issize();

    return 0;
}

