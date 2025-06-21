#include<iostream>
using namespace std;
int print(int x)
{
    if(x==0)
    {
        return 1;
    }
    return x*print(x-1);
    

}
int main()
{
    int x;
    cout<<"Enter a number: "<<endl;
    cin>>x;
    cout<<print(x);
}