#include<iostream>
using namespace std;
void honnai(int n,char a,char b,char c)
{
    if(n==1)
    {
        cout<<"Move   "<<n<<"  From  "<<a<<"  to  "<<c<<endl;
        return;
    }
    honnai(n-1,a,c,b);
    cout<<"Move   "<<n<<"  From  "<<a<<"  to  "<<b<<endl;
    honnai(n-1,b,a,c);

}
int main()
{
     honnai(3,'A','B','C');
}