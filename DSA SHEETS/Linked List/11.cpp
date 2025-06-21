#include<iostream>
using namespace std;
void search(int arr[],int start,int end,int target)
{
    if(start>=end)
    {
        cout<<"Not present";
        return;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
        cout<<mid+1;
        return;
    }
    else if(arr[mid]>target)
    {
        search(arr,start,mid-1,target);
    }
    else
    {
        search(arr,mid+1,end,target);
    }
}
int main()
{
    int arr[5]={3,6,9,19,20};
    search(arr,0,4,4);
}