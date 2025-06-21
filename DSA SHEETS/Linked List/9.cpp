#include<iostream>
using namespace std;
int main()
{
    // int *ptr=new int[5];
    // for(int i=0;i<5;i++)
    // {
    //     cin>>ptr[i];
    // }
    // for(int i=0;i<5;i++)
    // {
    //     cout<<ptr[i];
    // }
    // delete []ptr;
    int row,col;
    cout<<"Enter row: "<<endl;
    cin>>row;
    cout<<"Enter col: "<<endl;
    cin>>col;
    int **ptr=new int *[row];
    for(int i=0;i<row;i++)
    {
        ptr[i]=new int [col];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>ptr[i][j];
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<ptr[i][j]<< "  ";
        }
        cout<<endl;
    }

}