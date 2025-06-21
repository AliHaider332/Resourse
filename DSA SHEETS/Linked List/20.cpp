#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
Node* add_array(int arr[],int start,int end)
{
    if(start==end)
    {
        return NULL;
    }
    Node*temp=new Node(arr[start]);
    temp->next=add_array(arr,start+1,end);
    return temp;

}
void add_any(Node* &Head,int value,int position)
{
    Node* temp=new Node(value);
    if(Head==NULL)
    {
        Head=temp;
    }
    else if(Head->next==NULL)
    {
        Head->next=temp;
    }
    else if(position==0)
    {
        temp->next=Head;
        Head=temp;
    }
    else 
    {
        Node* tail=Head;
        while(position-1)
        {
            position--;
            tail=tail->next;
        }
        temp->next=tail->next;
        tail->next=temp;
    }
}
void insert_at_end(Node* &Head,int value)
{
    Node* temp=new Node(value);
    if(Head==NULL)
    {
        Head=temp;
    }
    else if(Head->next==NULL)
    {
        Head->next=temp;
    }
    else 
    {
        Node* tail=Head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        tail->next=temp;
    }
}
void insert_at_start(Node* &Head,int value)
{
    Node* temp=new Node(value);
    temp->next=Head;
    Head=temp;
}
void display(Node* &Head)
{
    Node*temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
int main()
{
   Node *Head=NULL;
   int arr[5]={111,222,333,444,555};
   Head=add_array(arr,0,5);
   insert_at_end(Head,99);
   insert_at_end(Head,88);
   insert_at_end(Head,77);
   insert_at_end(Head,66);
   insert_at_end(Head,55);
   insert_at_start(Head,11);
   insert_at_start(Head,22);
   insert_at_start(Head,33);
   insert_at_start(Head,44);
   add_any(Head,8888,0);
   display(Head);

}