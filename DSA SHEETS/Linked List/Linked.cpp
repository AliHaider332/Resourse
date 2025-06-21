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
void insert_at(Node **Head,int position,int value)
{
    Node *tail=*Head;
    for(int i=0;i<position-1;i++)
    {
        tail=tail->next;
    }
    Node *temp=new Node(value);
    temp->next=tail->next;
    tail->next=temp;
}
Node* insertion_(int arr[],int start,int end,Node *pre)
{
    
    if(start==end)
    {
        return pre;
    }
    Node *temp=new Node(arr[start]);
    temp->next=pre;
    return insertion_(arr,start+1,end,temp);
}
Node* insertion(int arr[],int start,int end)
{
    if(start==end)
    {
        return NULL;
    }
    Node *temp=new Node(arr[start]);
    temp->next=insertion(arr,start+1,end);
    return temp;
}
void insert(Node **Head,int a)
{
    Node *temp=new Node(a);
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
void add_end(Node **Head,int a)
{
    Node *temp=new Node(a); 
    if(*Head==NULL)
    {
        *Head=temp;
    }
    else
    {
        Node *trail=*Head;
        while(trail->next!=NULL)
        {
             trail=trail->next;
        }
        trail->next=temp;

    }
}
void display(Node **Head)
{
    Node *temp=*Head;
    
    while(temp->next!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;

    }
    cout<<temp->data<<endl;
}
int main()
{
        Node *Head;
        Head=new Node(100);
        int arr[5]={5,6,7,3,2};
        Head->next=insertion_(arr,0,5,NULL);
        insert(&Head,111);
        insert(&Head,1111);
        insert(&Head,11111);
        insert(&Head,111111);
        add_end(&Head ,22222);
        add_end(&Head ,222222);
        insert_at(&Head,4,9999);
        display(&Head);

}