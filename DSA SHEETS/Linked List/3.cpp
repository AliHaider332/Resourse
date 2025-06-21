#include<iostream>
using namespace std;
void search(int arr[],int value)
{
    int start=0,end=6,mid,a;
    while(start<=end)
    {
        mid=start+(end-start)/2;
        if(arr[mid]==value)
        {
            cout<<"yes it is present int array at  "<<mid<<" index"<<endl;
            return;
        }
        else if(arr[mid]>value)
        {
             end=mid-1;
        }
        else
        {
            a=mid;
            start=mid+1;
        }
    }
    cout<<"THe exect value is not present in the array but the nearest value is "<<arr[a]<<"  and its index is "<<a<<endl;
    return ;
}
int main()
{
    int arr[7]={2,3,6,8,9,10,33};
    search(arr,18);
}