#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subset(int arr[],int start,int end,vector<int>temp,vector<vector<int>>&ans)
{
    if(start>=end)
    {
        ans.push_back(temp);
        return;
    }
    subset(arr,start+1,end,temp,ans);
    temp.push_back(arr[start]);
    subset(arr,start+1,end,temp,ans);
}
int main()
{
    int arr[4]={1,2,3,4};
    vector<int>temp;
    vector<vector<int>>ans;
    subset(arr,0,4,temp,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }
}