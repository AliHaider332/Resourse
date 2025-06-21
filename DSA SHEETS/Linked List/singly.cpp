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

int main()
{
    //Dinamically created nod
   /* Node *Head=new Node;
    Head->data=10;
    Head->next=NULL;
    insertion(Head,5);*/
    Node *Head;
    Head=NULL;
    int arr[5]={9,8,7,2,3};
    /*for(int i=0;i<5;i++)
    {
    if(Head==NULL)
    {
     Head= new Node(arr[i]);
     Head->next=NULL;
    }
    else
    {
     Node *temp=new Node(arr[i]);
     temp->next=Head;
     Head=temp;
    }

    }*/
    for(int i=0;i<5;i++)
    {
    if(Head==NULL)
    {
     Head= new Node(arr[i]);
     Head->next=NULL;
     
     
    }
    else
    {
        Node *temp=Head;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        Node *p=new Node(arr[i]);
        temp->next=p;
        p->next=NULL;
        


    }
    }

    Node *temp=Head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"   ";
        temp=temp->next;
    }
   
}