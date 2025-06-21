#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node()
    {

    }
    Node(int value)
    {
        data=value;
        next=NULL;
    }
};
void middle(Node *Head)
{
    Node *slow=Head;
    Node* fast=Head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<slow->data<<"  ";
}
void Middle(Node*Head)
{
    Node *temp=Head;
    int i=0;
    while(temp!=NULL)
    {
       i++;
       temp=temp->next;
    }
    temp=Head;
    int j=i/2;
    i=0;
    while(i<j)
    {
        temp=temp->next;
        i++;
    }
    cout<<temp->data<<"  ";
}
Node* rotate_third(Node *cur,Node  *pre)
{
    if(cur==NULL )
    {
       return pre;
    }
    Node *fut=cur->next;
    cur->next=pre;
    return rotate_third(fut,cur);
    

}
Node* rotate_second(Node *Head)
{
    Node *pre=NULL;
    Node *cur=Head;
    Node *fut=NULL;
    while(cur!=NULL)
    {
        fut=cur->next;
        cur->next=pre;
        pre=cur;
        cur=fut;
    }
    return pre;
}
void rotate_first(Node *Head)
{
    if(Head==NULL || Head->next==NULL)
    {
        cout<<"This is the  empty linked list"<<endl;
    }
    else 
    {
        vector<int>cun;
        Node *Temp=Head;
        while(Temp!=NULL)
        {
            cun.push_back(Temp->data);
            Temp=Temp->next;
        }
        size_t i=cun.size()-1;
        Temp=Head;
        while(Temp!=NULL)
        {
            Temp->data=cun[i];
            Temp=Temp->next;
            i--;
        }

    }
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
   Node *Head=NULL;
   add_at_end(&Head,11);
   add_at_end(&Head,22);
   add_at_end(&Head,33);
   add_at_end(&Head,44);
   add_at_end(&Head,55);
   add_at_end(&Head,66);
//    rotate_first(Head);
//    Head=rotate_third(Head,NULL);

//    Dispaly(&Head);
   middle(Head);
}