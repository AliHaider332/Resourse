#include<iostream>
using namespace std;
void divide(int a,int b)
{
    try
    {
        if(b==0)
          throw("yes");
        cout<<a/b;
    }
    catch(const char *e)
    {
        cout<<e;
    }
    catch (...)
    {
        cout << "An unknown error occurred" << '\n'; // Catch any other type of exceptions
    }
    
}
int main()
{
    divide(4,0);
}