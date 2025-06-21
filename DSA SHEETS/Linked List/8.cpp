#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
string itr(int a)
{
    string ss;
    int arr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string>s={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    for(size_t i=0;i<s.size();i++)
    {
        while(a>=arr[i])
        {
            ss=ss+s[i];
            a=a-arr[i];
    
        }
    }
    return ss;
}
int main()
{
    int a;
    cout<<"Enter a value:  "<<endl;
    cin>>a;
    cout<<"THe roman is:  "<<itr(a);
}