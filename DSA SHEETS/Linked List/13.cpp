#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void permutation(int arr[],vector<int>&temp,vector<vector<int>>&ans,vector<bool>check)
{
    if(temp.size()==check.size())
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
            permutation(arr,temp,ans,check);
            check[i]=0;
            temp.pop_back();
        }
    }
}
int main()
{
    int arr[4]={1,2,3,4};
    vector<int>temp;
    vector<vector<int>>ans;
    vector<bool>check(4,0);
    permutation(arr,temp,ans,check);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }
}