#include<iostream>
using namespace std;
void search(int arr[],int a)
{
    int start=0,end=4,mid;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==a)
        {
            cout<<"Yes"<<endl;
            return;
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
    cout<<"No"<<endl;
    return ;
}
int main()
{
    int arr[5]={2,3,5,7,8};
    search(arr,7);
}