#include<iostream>
#include<string>
using namespace std;
int num(char a)
{
    if(a=='I')
    return 1;
    else if(a=='V')
    return 5;
    else if(a=='X')
    return 10;
    else if(a=='L')
    return 50;
    else if(a=='C')
    return 100;
    else if(a=='D')
    return 500;
    else if(a=='M')
    return 1000;
    else
    return 0; 

}
int main()
{
    string s;
    getline(cin ,s);
    int end=s.size()-1,sum=0;
    if(s.size()==1)
    {
        sum+=num(s[0]);
        cout<<sum;
        return 0;
    }
    for(int i=0;i<end;i++)
    {
        if(num(s[i])<num(s[i+1]))
        {
           sum-=num(s[i]);
        }
        else
        {
            sum+=num(s[i]);
        }
       
    }
    sum+=num(s[end]);
    cout<<sum;
    return 0;
}