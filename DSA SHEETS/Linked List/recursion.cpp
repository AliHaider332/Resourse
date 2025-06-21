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
Node* add_array(int arr[],int start,int end)
{
    if(start==end)
    {
        return NULL;
    }
    Node *temp=new Node(arr[start]);
    temp->next=add_array(arr,start+1,end);
    return temp;
    
}
void Dispaly(Node *Head)
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
   int arr[5]={1,2,3,4,5};
   Head=add_array(arr,0,5);
   Dispaly(Head)
}