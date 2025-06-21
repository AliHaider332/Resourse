#include<iostream>
#include<queue>
using namespace std;
class Node
{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int a)
    {
        data=a;
        left=right=NULL;
    }
};
int main()
{
    cout<<"Enter the value of the root node:  "<<endl;
    int a;
    cin>>a;
    Node* root=new Node(a);
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
       Node *temp=q.front();
       q.pop();
       // connect the left node
       cout<<"Enter the value of the "<<temp->data<<" left node"<<endl;
       int l;
       cin>>l;
       if(l!=-1)
       {
        temp->left=new Node(l);
        q.push(temp->left);
       }
       cout<<"Enter the value of the "<<temp->data<<" right node"<<endl;
       int r;
       cin>>r;
       if(r!=-1)
       {
        temp->right=new Node(r);
        q.push(temp->right);
       }
    }
}
