#include<iostream>
#include<vector>
using namespace std;
int pivotpoint(int arr[],int start,int end)
{
    int position=start;
    while(start<=end)
    {
        if(arr[start]<=arr[end])
        {
            swap(arr[position],arr[start]);
            position++;
        }
        start++;
    }
    return position-1;
}
void quick(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int pivot;
    pivot=pivotpoint(arr,start,end);
    quick(arr,start,pivot-1);
    quick(arr,pivot+1,end);
}
void merge(int arr[],int start,int mid,int end)
{
    vector<int>v(end-start+1,0);
    int left=start,right=mid+1,index=0;
    while(left<=mid && right <=end)
    {
        if(arr[left]<=arr[right])
        {
           v[index]=arr[left];
           left++;
        } 
        else
        {
            v[index]=arr[right];
            right++;
        }
        index++;
    }
    while(left<=mid)
    {
        v[index]=arr[left];
        left++;
        index++;
    }
    while(right<=end)
    {
        v[index]=arr[right];
        right++;
        index++;
    }
    for(int i=0;i<v.size();i++)
    {
        arr[start+i]=v[i];
    }
}
void mergesort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return;
    }
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid-1);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
void insertion(int arr[],int end)
{
    for(int i=1;i<end;i++)
    {
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j-1],arr[j]);
            }
        }
    }
}
void bubble(int arr[],int end)
{
    for(int i=0;i<end-1;i++)
    {
        for(int j=i;j<end-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void selection(int arr[],int end)
{
    for(int i=0;i<end-1;i++)
    {
        for(int j=i+1;j<end;j++)
        {
            if(arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main()
{
    int arr[5]={7,3,9,4,6};
    quick(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
