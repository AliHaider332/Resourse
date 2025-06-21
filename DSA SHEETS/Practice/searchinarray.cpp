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
    int a;
    cin>>a;
    int start=0,end=sizeof(arr)/4-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(arr[mid]==a)
        {
            cout<<"Yes";
            return 0;
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
    cout<<"No";
    return 0;


}