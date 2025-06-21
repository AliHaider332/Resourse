#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void tower(int A,char a,char b,char c)
{
    if(A==1)
    {
        cout<<"Disk "<<A<<" move from "<<a<<" to "<<c<<endl;
        return;
    }
    tower(A-1,a,b,c);
    cout<<"Disk "<<A<<" move from "<<a<<" to "<<c<<endl;
    tower(A-1,b,a,c);
}
int main()
{
    tower(3,'A','B','C');
}