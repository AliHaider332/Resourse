#include<iostream>
using namespace std;

int missing(int arr[], int value) 
{
    int start = 0, end = 6, ans, mid;
    while (start <= end)
     {
        mid=start+(end-start)/2;
        if(arr[mid]-mid+1>=value)
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
     }
     return ans+value;
}

int main()
 {
    int arr[6] = {2, 3, 4, 7, 9, 11};
    cout << missing(arr, 1);
    return 0;
}