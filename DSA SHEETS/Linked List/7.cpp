#include<iostream>
using namespace std;
int num(char c)
{
    if ( c=='I')
    {
        return 1;
    }
    else if( c=='V')
    {
        return 5;
    }
    else if( c=='X')
    {
        return 10;
    }
    else if(c=='L')
    {
        return 50;
    }
    else if( c=='C')
    {
        return 100;
    }
    else if(c=='D')
    {
        return 500;
    }
    else
    {
        return 1000;
    }
}
void RomanToIntegers(string s)
{
    int a=0;
    for(size_t i=0;i<s.size()-1;i++)
    {
        if(num(s[i])>=num(s[i+1]))
        {
            a=a+num(s[i]);
        }
        else
        {
            a=a-num(s[i]);
        }
    }
    // if(num(s[s.size()-1])>num(s[s.size()-2]))
    // {
    //     a=a-s[s.size()-1];
    // }
    // else
    // {
    //     a=a+s[s.size()-1];
    // }
    a += num(s[s.size() - 1]);

    cout<<"In integer :"<<a;
}
int main()
{
    RomanToIntegers("XXIV");
}