#include<iostream>
using namespace std;
class animal
{
    public:
    virtual void voice()
    {
       cout<<"HI HI"<<endl;
    }
};
class dog:public animal
{
    public:
    virtual void voice()
    {
        cout<<"Burk Burk"<<endl;
    }
};
class cat:public animal
{
    public:
    void voice()
    {
        cout<<"Meaone"<<endl;
    }
};
class snake:public animal
{
    public:
    void voice()
    {
        cout<<"sherk"<<endl;
    }
};
int main()
{
    animal *a;
    a=new dog;
    a->voice();
    // animal b;
    // a=&b;
    // a->voice();
}