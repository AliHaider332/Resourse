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
Node* merge(Node* &Head1,Node* &Head2)
{
    Node* Head=new Node(0);
    Node* temp=Head;
    while(Head1!=NULL && Head2!=NULL)
    {
       if(Head1->data<=Head2->data)
       {
        Node* t=new Node(Head1->data);
        temp->next=t;
        Head1=Head1->next;
       }
       else
       {
        Node* t=new Node(Head2->data);
        temp->next=t;
        Head2=Head2->next;
       }
       temp=temp->next;
    }
    Head=Head->next;
    return Head;
}
void duplicate(Node* &Head)
{
    Node* temp=Head;
    Node* position=Head;
    while(temp!=NULL)
    {
        if(temp->data!=position->data)
        {
            position=position->next;
            position->data=temp->data;
        }
        temp=temp->next;
    }
    position->next=NULL;

}
void reverse(Node* &Head)
{
    Node *current=Head;
    Node* first=NULL;
    Node* future=NULL;
    while(current!=NULL)
    {
        future=current->next;
        current->next=first;
        first=current;
        current=future;

    }
    Head=first;
}
void check_p(Node* &Head)
{
    Node*temp=Head;
    vector<int>v;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    int start=0,end=v.size()-1;
    while(start<=end)
    {
        if(v[start]==v[end])
        {
            start++,end--;
        }
        else
        {
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
    return;

}
void rotate_(Node* &Head,int k)
{
    if(Head==NULL  ||  Head->next==NULL)
    {
        return;
    }
    Node*temp=Head;
    vector<int>v;
    while(temp->next!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    int n=v.size();
    k=k%n;
    if(k==0)
    {
        return;
    }
    vector<int>a(n);//New concept
    for(int i=0;i<n;i++)
    {
        a[(i+k)%n]=v[i];
    }
    temp=Head;
    for(int i=0;i<n;i++)
    {
        temp->data=a[i];
        temp=temp->next;
    }





}
void rotate(Node* &Head,int k)
{
    if(Head==NULL  ||  Head->next==NULL)
    {
        return;
    }
    Node *temp=Head;
    int i=0;
    while(temp)
    {
        i++;
        temp=temp->next;
    }
    k=k%i;
    if(k==0)
    {
        return;
    }
    i=i-k;
    temp=Head;
    Node *pre=NULL;
    for(int j=0;j<i;j++)
    {
        pre=temp;
        temp=temp->next;
    }
    pre->next=NULL;
    Node*end=temp;
    while(end->next!=NULL)
    {
        end=end->next;
    }
    end->next=Head;
    Head=temp;
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
   Node *Head1=NULL;
   add_at_end(&Head1,111);
   add_at_end(&Head1,222);
   add_at_end(&Head1,223);
   add_at_end(&Head1,444);
   add_at_end(&Head1,445);
   add_at_end(&Head1,474);
   add_at_end(&Head1,797);
   Node *Head2=NULL;
   add_at_end(&Head2,101);
   add_at_end(&Head2,202);
   add_at_end(&Head2,202);
   add_at_end(&Head2,400);
   add_at_end(&Head2,404);
   add_at_end(&Head2,404);
   add_at_end(&Head2,707);
//    add_at_end(&Head,33);
//    rotate_(Head,4);
//    Dispaly(&Head);
//    check_p(Head);
//    reverse(Head);
//    duplicate(Head);
   Node *Head;
   Head=merge(Head1,Head2);
   Dispaly(&Head);

}