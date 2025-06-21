#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,3,4,7,11};
    int start=0,end=4,mid,k,ans=arr[4];
    cout<<"Enter the missing number:\n";
    cin>>k;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if((arr[mid]-(mid+1))>=k)
        {
            ans=mid;
            end=mid-1;

        }
        else
        {
            start=mid+1;
        }
    }
    cout<<ans+k;
}