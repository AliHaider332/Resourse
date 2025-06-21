#include<iostream>
using namespace std;
int main()

{
    int arr[5];
    cout<<"Enter the Elements of thr array\n";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Target Element:"<<endl;
    int a,b=-1,c=-1;
    cin>>a;
    int start=0,end=4;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]   == a)
        {
            b=mid;
            end=mid-1;
            
        }
        else if(arr[mid]>a)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    start=0,end=4;
     while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==a)
        {
            c=mid;
            start=mid+1;
            
        }
        else if(arr[mid]<a)
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    if((c-b+1)<0 || b==-1 || c==-1)
    {
        cout<<"Sorry";
    }

    else
       cout<<c-b+1<<endl;

    


}