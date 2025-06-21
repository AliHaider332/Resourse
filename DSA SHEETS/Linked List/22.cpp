#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node
{
    public:
    int data;
    Node*pre;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=NULL;
        pre=NULL;
    }
};
bool check(vector<int>&v,Node*temp)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==temp->data)
        {
            return 1;
        }
    }
    return 0;
}
bool check_duplication(Node*&Head)
{
    vector<int>v;
    Node *temp=Head;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    temp=Head;
    while(temp!=NULL)
    {
        if(check(v,temp))
        {
            return 1;
        }
    }
    return 0;
}
Node* reverse(Node *&Head)
{
    Node*previous=NULL;
    Node*current=Head;
    Node*future=NULL;
    while(current!=NULL)
    {
        previous=current;
        future=current->next;
        current->next=current->pre;
        current->pre=future;
        current=future;
    }
    Head=previous;
    return Head;
}
void delete_any(Node*&Head,int position)
{
    if(Head==NULL)
    {
        return;
    }
    else if(Head->next==NULL)
    {
        Node*cur=Head;
        cur=Head->next;
        Head->next=NULL;
        delete cur;
    }
    else
    {
        Node*cur=Head;
        Node*previous=NULL;
        while(position>1)
        {
            previous=cur;
            cur=cur->next;
            position--;
        }
        previous->next=cur->next;
        cur->next->pre=previous;
        delete cur;
    }

}
void delete_at_end(Node*&Head)
{
    if(Head==NULL)
    {
        return;
    }
    else if(Head->next==NULL)
    {
        Node*cur=Head;
        cur=Head->next;
        Head->next=NULL;
        delete cur;
    }
    else
    {
        Node*cur=Head;
        Node*previous=NULL;
        while(cur->next!=NULL)
        {
            previous=cur;
            cur=cur->next;
        }
        previous->next=NULL;
        delete cur;
        
    }
}
void delete_at_start(Node*&Head)
{
    Node*cur=Head;
    Head=Head->next;
    Head->pre=NULL;
    delete cur;
}
Node* insert_array(int arr[],int start,int end,Node* previous)
{
    if(start==end)
    {
        return NULL;
    }
    Node*temp=new Node(arr[start]);
    temp->pre=previous;
    temp->next=insert_array(arr,start+1,end,temp);
    return temp;
}
void insert_at_any(Node*&Head,int value,int position)
{
    Node *temp=new Node(value);
    if(Head==NULL)
    {
        Head=temp;
    }
    else if(Head->next==NULL)
    {
        Head->next=temp;
        temp->pre=Head;
    }
    else
    {
        Node*cur=Head;
        // Node*previous=NULL;
        while(position>1)
        {
            position--;
            cur=cur->next;
            
        }
        temp->next=cur->next;
        temp->pre=cur;
        cur->next=temp;
    }
}
void insert_at_end(Node*&Head,int value)
{
    Node *temp=new Node(value);
    if(Head==NULL)
    {
        Head=temp;
    }
    else if(Head->next==NULL)
    {
        Head->next=temp;
        temp->pre=Head;
    }
    else
    {
        Node*cur=Head;
        // Node*previous=NULL;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=temp;
        temp->pre=cur;
    }
}
void insert_at_start(Node* &Head,int value)
{
     Node *temp=new Node(value);
     Head->next=temp;
     temp->pre=Head;
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
    Node* Head=NULL;
    int arr[5]={999,888,777,666,555};
    Head=insert_array(arr,0,5,NULL);
    display(Head);
    cout<<endl;
    check_duplication(Head);
    // cout<<endl;
    // Head=reverse(Head);
    // // insert_at_start(Head,222);
    // // insert_at_end(Head,333);
    // // insert_at_end(Head,444);
    // // insert_at_end(Head,555);
    // // insert_at_any(Head,666,3);
    // // // delete_at_start(Head);
    // // // delete_at_end(Head);
    // display(Head);
    // // cout<<endl;
    // // delete_any(Head,3);
    // // display(Head);

}