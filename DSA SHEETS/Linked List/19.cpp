#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream a;
    a.open("z.txt");
    a<<"Ali Haider";
    a.close();
    ifstream b;
    b.open("z.txt");
    string s;
    /*a>>s;
    */
    getline(b,s);
    cout<<s;
    b.close();
}