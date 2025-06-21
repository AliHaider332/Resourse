#include<iostream>
using namespace std;

void rotated(int arr[]) 
{
    int start = 0, end = 5, mid;
    while (start <= end)
     {
        mid = start + (end - start) / 2;
        if ((mid == 0 || arr[mid - 1] < arr[mid]) && (mid == 5 || arr[mid] > arr[mid + 1]))
         {
            cout << mid << endl;
            return;
        } 
        else if (mid > 0 && arr[mid - 1] > arr[mid]) 
        {
            end = mid - 1;
        } 
        else
        {
            start = mid + 1;
        }
    }
}

int main() {
    int arr[7] = {4, 5, 6, 1, 2, 3};
    rotated(arr);
    return 0;
}