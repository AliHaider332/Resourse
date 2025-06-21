#include<iostream>
using namespace std;
class Node 
{
    public:
    int data;
    Node *next;
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
void delete_any_R(Node **Head,int position )
{
    if(position==1)
    {
        
    }
    delete_any_R(&(*Head->next),position-1);
}
void delete_any(Node **Head,int a)
{
    Node *temp=*Head;
    if(a==1)
    {
        *Head=temp->next;
        delete temp;
        return;

    }
    if(*Head==NULL)
    {
        cout<<"Linked list is Empty:"<<endl;
        return;
    }
    if(temp->next==NULL)
    {
        
        *Head=NULL;
        delete temp;
    }
    else 
    {
        Node *tail=NULL;
        for(int i=0;i<a-1;i++)
        {
            tail=temp;
            temp=temp->next;
        }
        tail->next=temp->next;
        delete temp;
    }
}
void delete_at_start(Node **Head)
{
    Node *temp=*Head;
    if(temp->next==NULL)
    {
        *Head=NULL;
    }
    else
    {
        *Head=temp->next;
        delete temp;
        
    }
}
void delete_node_at_end(Node **Head)
{
    Node *pre=NULL;
    Node *tail=*Head;
    while(tail->next!=NULL)
    {
        pre=tail;
        tail=tail->next;
        
    }
    pre->next=NULL;
    delete tail;

}
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
Node* insert_at_start_R(int arr[],int start,int end,Node *pre)
{
    if(start==end)
    {
        return pre;
    }
    Node *temp=new Node (arr[start]);
    temp->next=pre;
    return insert_at_start_R(arr,start+1,end,temp);
}
Node* insert_at_end_R(int arr[],int start,int end)
{
    if(start==end)
    {
        return NULL;
    }
    Node *temp=new Node (arr[start]);
    temp->next=insert_at_end_R(arr,start+1,end);
    return temp;
}
void insert_at_end(Node **Head,int value)
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
void insert_at_start(Node **Head,int value)
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
void Dispaly(Node **Head)
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
    Head=NULL;
    // insert_at_start(&Head,111);
    // insert_at_start(&Head,1111);
    // insert_at_start(&Head,11111);
    // insert_at_end(&Head,9999);
    int arr[5]={3,33,333,3333,33333};
    Head=insert_at_start_R(arr,0,5,NULL);
    // delete_node_at_end(&Head);
    // delete_node_at_end(&Head);
    // delete_node_at_end(&Head);
    // delete_at_start(&Head);
    // delete_at_start(&Head);
    // delete_at_start(&Head);
    delete_any(&Head,1);
   
    Dispaly(&Head);
}