#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   ifstream a;
   a.open("z.txt");
   string s;
   //char b;
   //a>>b;
   //b=a.get();
   /*while(!a.eof())
   {
    cout<<b;
    b=a.get();
    //a>>b;
   }*/
   while(getline(a,s))
   {
    cout<<s<<"\n";
   }
   a.close();
}