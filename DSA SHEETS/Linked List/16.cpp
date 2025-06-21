#include<iostream>
using namespace std;
class complex
{
    public:
    int real;
    int img;
    complex()
    {

    }
    complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    }
    complex operator + (complex a)
    {
        complex ans;
        ans.real=a.real+real;
        ans.img=img+a.img;
        return ans;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
    }

};

int main()
{
    complex a(3,4);
    complex b(7,9);
    complex c;
    c=a+b;
    c.display();

}