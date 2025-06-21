#include<iostream>
using namespace std;
void RB(int arr[],int start,int end,int target)
{
    if(start>end)
    {
        cout<<"No";
        return;
    }
    int mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
        cout<<mid;
        return ;
    }
    if (arr[mid] > target) 
    {
        RB(arr, start, mid - 1, target);
    }
     else 
    {
        RB(arr, mid + 1, end, target);
    }


}
int main()
{
    int arr[5]={3,6,8,9,10};
    RB(arr,0,4,9);

}