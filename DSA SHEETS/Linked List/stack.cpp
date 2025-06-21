#include<iostream>
using namespace std;

// Stack using array
class stack
{
    int *arr;
    int size;
    int top;
public:
    stack(int a)
    {
        arr = new int[a];
        size = a;
        top = -1;
    }

    void push(int value)
    {
        if (top >= size - 1)
        {
            cout << "Stack overflow!" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "The value: " << value << " is pushed onto the stack" << endl;
        }
    }

    void pop()
    {
        if (top <= -1)
        {
            cout << "Stack underflow!" << endl;
        }
        else
        {
            cout << "The value: " << arr[top] << " is popped from the stack" << endl;
            top--;
        }
    }

    int issize()
    {
        return top + 1;
    }

    bool isempty()
    {
        return top == -1;
    }
};

// Stack using linked list
class Node
{
public:
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

class STACK
{ 
    Node *Head = NULL;
    int top = 0;
public:
    void push(int value)
    {
        Node *temp = new Node(value);
        if (!temp)
        {
            cout << "Stack overflow!" << endl;
            return;
        }
        temp->next = Head;
        Head = temp;
        top++;
        cout << "The value: " << Head->data << " is pushed onto the stack" << endl;
    }

    void pop()
    {
        if (Head == nullptr)
        {
            cout << "Stack underflow!" << endl;
            return;
        }
        Node *temp = Head;
        cout << "The value: " << Head->data << " is popped from the stack" << endl;
        Head = Head->next;
        delete temp;
        top--;
    }

    int issize()
    {
        return top;
    }

    bool isempty()
    {
        return Head == nullptr;
    }
};

int main()
{
    STACK a;
    a.push(303);
    a.push(339);
    a.push(383);

    cout << "Is stack empty? " << (a.isempty() ? "Yes" : "No") << endl;
    cout << "Stack size: " << a.issize() << endl;

    a.pop();
    a.pop();
    a.pop();

    cout << "Is stack empty? " << (a.isempty() ? "Yes" : "No") << endl;
    cout << "Stack size: " << a.issize() << endl;

    a.pop(); // Trying to pop from an empty stack
    a.push(336);

    cout << "Stack size: " << a.issize() << endl;

    return 0;
}
