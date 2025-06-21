#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *pre;
    node *next;
    node(int a)
    {
        data=a;
        pre=NULL;
        next=NULL;
    }
};
class Dequeue
{
    public:
    node *front=NULL;
    node *rear=NULL;
    node *Head=NULL;
    bool isempty()
    {
        return front==NULL && rear==NULL;
    }
    void push_front(int a)
    {
       node *temp=new node(a);
       if(isempty())
       {
        cout<<"As the dequeue is empty so the value "<<a<<" is push at the front"<<endl;
       Head=temp;
       front=Head;
       rear=Head;
       }
       else
       {
        cout<<"The value "<<a<<" is push at the front"<<endl;
        temp->next=front;
        front->pre=temp;
        front=temp;
        Head=front;
       }
    }
    void push_back(int a)
    {
       node *temp=new node(a);
       if(isempty())
       {
       cout<<"As the dequeue is empty so the value "<<a<<" is push at the back"<<endl;
       Head=temp;
       front=Head;
       rear=Head;
       }
       else
       {
        cout<<"The value "<<a<<" is push at the back"<<endl;
        rear->next=temp;
        temp->pre=rear;
        rear=temp;
       }
    }
    void pop_front()
    {
       if(isempty())
       {
        cout<<"The Dequeue is empty so it my cause the underflow "<<endl;
        return ;
       }
       else
       {
            node* temp = front;
            front = front->next;
            if (front != NULL)
                front->pre = NULL;
            else
                rear = NULL;
            cout << "The value of " << temp->data << " is popped from the front" << endl;
            delete temp;
       }
    }
    void pop_back()
    {
       if(isempty())
       {
        cout<<"The Dequeue is empty so it my cause the underflow "<<endl;
        return ;
       }
       else
       {
            node* temp = rear;
            rear = rear->pre;
            if (rear != NULL)
                rear->next = NULL;
            else
                front = NULL;
            cout << "The value of " << temp->data << " is popped from the back" << endl;
            delete temp;
       }
    }



};
int  main()
{
   Dequeue a;
   a.push_back(1);
   a.push_front(2);
   a.push_back(3);
   a.push_back(111);
   a.push_front(211);
   a.push_back(332);
   a.push_back(14);
   a.push_front(26);
   a.push_back(39);
   a.pop_back();
   a.pop_front();
}