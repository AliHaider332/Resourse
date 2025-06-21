#include<iostream>
using namespace std;
void count(int arr[],int a)
{
    int start=0,end=4,mid,left=-1,right=-1;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==a)
        {
            left=mid;
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
        mid=start+(end-start)/2;
        if(arr[mid]==a)
        {
            right=mid;
            start=mid+1;
            
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
    cout<<right-left+1;
    
}
int main()
{
    int arr[5]={2,5,5,5,8};
    count(arr,5);
}