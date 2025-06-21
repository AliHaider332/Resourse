#include<iostream>
#include<vector>
#include<string>
using namespace std;
string ITOR(int a)
{
    string ss;
    int arr[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    vector<string>s={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    for(int i=0;i<s.size();i++)
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
   cout<<ITOR(9)<<"\n" ;   
   cout<<ITOR(111)<<"\n" ; 
   cout<<ITOR(544)<<"\n" ; 

}