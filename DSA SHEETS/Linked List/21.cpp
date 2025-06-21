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
void rotate(Node*& Head,int n)
{
    int lenght=0;
    Node* temp=Head;
    while(temp!=NULL)
    {
        lenght++;
        temp=temp->next;
    }
    int position=lenght-n;
    temp=Head;
    while(position>0)
    {
        position--;
        temp=temp->next;
    }
    Node* A=temp->next;
    Node*B=temp->next;
    temp->next=NULL;
    while(B->next!=NULL)
    {
         B=B->next;
    }
    B->next=Head;
    Head=A;

}
Node* mid(Node* &Head)
{
    Node* slow=Head;
    Node* fast=Head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    } 
    return slow;
}
void reverse(Node* &Head)
{
    Node*pre=NULL;
    Node* cur=Head;
    Node* fut=NULL;
    while(cur!=NULL)
    {
        fut=cur->next;
        cur->next=pre;
        pre=cur;
        cur=fut;

    }
    Head=pre;
}
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
void  show(Node* &A)
{
    cout<<"\n"<<A->data<<"  ";
}
int main()
{
   Node *Head=NULL;
   int arr[5]={111,222,333,444,555};
   Head=add_array(arr,0,5);
   insert_at_end(Head,666);
   insert_at_end(Head,777);
   insert_at_end(Head,888);
   insert_at_end(Head,999);
   insert_at_end(Head,1111);
   insert_at_start(Head,2222);
   insert_at_start(Head,3333);
   insert_at_start(Head,4444);
   insert_at_start(Head,5555);
//    add_any(Head,6666,0);
   reverse(Head);
//    Node*midd=mid(Head);
//    show(midd);
   display(Head);
   cout<<endl;
   rotate(Head,2);
   display(Head);
   cout<<endl;
   rotate(Head,3);
   display(Head);
   cout<<endl;
   rotate(Head,4);
   display(Head);
   cout<<endl;
   rotate(Head,5);
   display(Head);
   cout<<endl;
   rotate(Head,6);
   display(Head);

}