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
Node* tree()
{
    int x;
    cin>>x;
    if(x==-1)
    {
        return NULL;
    }
    Node* temp=new Node(x);
    cout<<"Enter the left of the "<<x<<endl;
    temp->left=tree();
    cout<<"Enter the right of the "<<x<<endl;
    temp->right=tree();
    return temp;
}
void LRN(Node* root)
{
    if(root==NULL)
    {
        
        return ;
    }
    LRN(root->left);
    LRN(root->right);
    cout<<root->data<<"  "<<endl;
}
void LNR(Node* root)
{
    if(root==NULL)
    {
        
        return ;
    }
    LNR(root->left);
    cout<<root->data<<"  "<<endl;
    LNR(root->right);

}
void NLR(Node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<"  ";
    NLR(root->left);
    NLR(root->right);
    return ;
}
int main()
{
   Node* temp=tree();
   LRN(temp);
}