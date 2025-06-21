#include<iostream>
using namespace std;
class add
{
    public:
    add(int a,int b)
    {
        cout<<a+b;
    }
    add(int a,int b,int c)
    {
        cout<<a+b+c;
    }
};
int main()
{
    add a(10,20,99);
}