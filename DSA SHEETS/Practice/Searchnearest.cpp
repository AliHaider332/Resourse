#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the Elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    int a;
    cout<<"Enter the Target:\n";
    cin>>a;
    int start=0,end=4,mid,store;
    while(start<=end)
    {
        mid=start+(start+end)/2;
        if(arr[mid]==a)
        {
            cout<<"yes index is:  "<<mid;
            return 0;
        }
        else if(arr[mid]>a)
        {
            
            end=mid-1;
        }
        else 
        {
            store=mid;
            start=mid+1;
        }
    }
    cout<<"The exect number is not found but this is the neares:  "<<arr[store];
}