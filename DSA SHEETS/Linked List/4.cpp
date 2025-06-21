#include<iostream>
using namespace std;
void sqr(int a)
{
    int start=0,end=a,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid==a)
        {
            cout<<"THe sqr if  "<<a<<"  is "<<mid;
            return;
        }
        else if(mid*mid>a)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    cout<<"THe sqr if  "<<a<<"  is "<<mid;

}
int main()
{
    int a;
    cout<<"Enter a number:   "<<endl;
    cin>>a;
    sqr(a);
}