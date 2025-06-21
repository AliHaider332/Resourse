#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter a number:"<<endl;
    int a;
    cin>>a;
    int start=0,mid,end=a;
    while(start<=end)
    {
        mid=start+(start+end)/2;
        if(mid*mid==a)
        {
           cout<<mid;
           return 0;
        }
        else if(mid*mid>a)
           end=mid-1;
        else
           start=mid+1;
              
    }


}