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
void delete_at_end(Node* &t)
{
    Node* temp=t;
    Node* tail=NULL;
    while(temp->next!=NULL)
    {
        tail=temp;
        temp=temp->next;
    }
    delete temp;
    tail->next=NULL;
}
void delete_at_start(Node* &temp)
{
    Node *tail=temp;
    temp=temp->next;
    delete tail;

}
void insert_any(Node **Head,int position ,int value)
{
    Node *temp=new Node (value);
    Node *tail=*Head;
    for(int i=0;i<position-1;i++)
    {
        tail=tail->next;
    }
    temp->next=tail->next;
    tail->next=temp;
}
void insert_at_any(Node* &tail,int position,int value)
{
    if(position ==0)
    {
        Node *temp=new Node(value);
        temp->next=tail->next;
        tail->next=temp;
        return;
    }
    insert_at_any(tail->next,position-1,value);
    return;
}
Node* add_at_start_r(int arr[],int start,int end)
{
    if(end==start-1)
    {
        return NULL;
    }
    Node *temp=new Node(arr[end]);
    temp->next=add_at_start_r(arr,start,end-1);
    return temp;
}
 Node* add_at_end_r(int arr[],int start,int end)
     {
        if(start==end)
        {
            return NULL;
        }
        Node *temp=new Node(arr[start]);
        temp->next=add_at_end_r(arr,start+1,end);
        return temp;

     }

void add_at_end(Node **Head,int value)
{
    Node *temp=new Node(value);
    if(*Head==NULL)
    {
       *Head=temp;
    }
    else
    {
        Node *tail=*Head;
        while(tail->next!=NULL)
        {
            tail=tail->next;
        }
        tail->next=temp;
    }
}
void add_at_start(Node **Head,int value)
{
    Node *temp=new Node(value);
    if(*Head==NULL)
    {
       *Head=temp;
    }
    else
    {
        temp->next=*Head;
        *Head=temp;
    }
}
void display(Node **Head)
{
    Node *temp=*Head;
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
   Head=add_at_start_r(arr,0,4);
   //    add_at_start(&Head,111);
   //    add_at_start(&Head,222);
   //    add_at_end(&Head,333);
   insert_at_any(Head,0,6666);
   //cout<<Head->data<<"  ";
   delete_at_end(Head);
   display(&Head);
   
}