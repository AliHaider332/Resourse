#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>arr(5,0);
    for(int i=0;i<5;i++)
    {
            arr[i]=i;
    }
    sort(arr.begin(),arr.end(),greater());
    for(int i=0; i<5 ;i++)
    {
            cout<<arr[i]<<"\n";
    }
    cout<<arr.front()+7;
    cout<<arr.back()+7;
    
    

}