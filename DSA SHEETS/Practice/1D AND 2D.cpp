/*#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int *p=arr;
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<p[i];
    }
}*/
#include<iostream>
using namespace std;
int main()
{
    int row,col;
    cout<<"Enter the rows:  \n";
    cin>>row;
    cout<<"Enter the col   \n";
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
            cout<<ptr[i][j]<<"    ";
        }
    }
    for(int i=0;i<row;i++)
    {
        delete ptr[row];
    }
    delete ptr;

}