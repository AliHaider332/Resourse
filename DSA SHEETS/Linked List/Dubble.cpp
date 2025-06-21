#include<iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next=NULL;
    Node *pre=NULL;
    Node(int data)
    {
        this->data=data;
    }
};
void reverse(Node* &Head)
{
   Node* current = Head;
    Node* future = NULL;
    Node* previous = NULL; // To keep track of the new head
    
    while (current != NULL) 
    {
        future = current->next;
        
        // Swap the next and prev pointers
        current->next = current->pre;
        current->pre = future;
        
        // Move to the next node in the original sequence
        previous = current;
        current = future;
    }
    
    // Set the new head of the reversed list
    Head = previous;
}
void delete_any(Node* &Head,int position)
{
    if(position==0)
    {
        Node* temp=Head;
        temp->next->pre=NULL;
        Head=temp->next;
       delete temp;
    } 
    else
    {
    Node *temp=Head;
    Node *tail=NULL;
    while(position>0 && temp->next!=NULL)
    {
        tail=temp;
        temp=temp->next;
        position--;
    }
    tail->next=temp->next;
    temp->next->pre=tail;
    delete temp;
    }
}
void delete_at_end(Node* &Head)
{
    Node *temp=Head;
    Node *tail=NULL;
    while(temp->next!=NULL)
    {
        tail=temp;
        temp=temp->next;
    }
    tail->next=NULL;
    delete temp;

}
void delete_at_start(Node* &Head)
{
    Node* temp=Head;
    temp->next->pre=NULL;
    Head=temp->next;
    delete temp;
}
void insert_at_end(Node* &Head ,int value)
{
    Node* temp=Head;
    if(Head==NULL)
    {
       Head=new Node(value);
       return;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        Node* NEW=new Node(value);
        temp->next=NEW;
        NEW->pre=temp;

    }
}
Node* insert_array(int arr[],int start,int end,Node*back)
{
    if(start==end)
    {
        return NULL;
    }
    Node* temp=new Node(arr[start]);
    temp->pre=back;
    temp->next=insert_array(arr,start+1,end,temp);
    return temp;
}
void insert_any(Node* &Head,int value,int position)
{
    Node* temp=Head;
    if(Head==NULL)
    {
       Head=new Node(value);
       return;
    }
    else
    {
    temp=Head;
     while (position > 1 )
    {
    temp = temp->next;
    position--;
    }

    Node* newNode = new Node(value);
    newNode->next = temp->next;
    newNode->pre = temp;

    
    temp->next = newNode;
}
    

}

void insert_at_start(Node* &Head,int value)
{
    
    Node* temp=Head;
    if(Head==NULL)
    {
       Head=new Node(value);
       return;
    }
    Node* NEW=new Node(value);
    NEW->next=temp;
    temp->pre=NEW;
    Head=NEW;
}
void display(Node* &Head)
{
    Node* temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"   ";
        temp=temp->next;
    }
}
int main()
{
   Node* Head=NULL;
//    insert_at_end(Head,444);
//    insert_at_end(Head,333);
//    insert_at_end(Head,222);
//    insert_at_end(Head,111);
//    insert_any(Head,555,3);
   int arr[5]={11,22,33,44,55};
   Head=insert_array(arr,0,5,NULL);
//    delete_any(Head,2);
   reverse(Head);
   display(Head);
   return 0;
}