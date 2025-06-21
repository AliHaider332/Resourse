#include<iostream>
#include<vector>
using namespace std;
void subset(int arr[],vector<bool>check,vector<int>&temp,vector<vector<int>>&ans)
{
    if(check.size()==temp.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=0;i<check.size();i++)
    {
        if(check[i]==0)
        {
            check[i]=1;
            temp.push_back(arr[i]);
            subset(arr,check,temp,ans);
            check[i]=0;
            temp.pop_back();
        }
    }
}
int main()
{
    int arr[3]={1,2,3};
    vector<bool>check(3,0);
    vector<int>temp;
    vector<vector<int>>ans;
    subset(arr,check,temp,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<"   ";
        }
        cout<<endl;
    }
}