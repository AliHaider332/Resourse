#include<iostream>
#include<vector>
using  namespace std;
class Human
{
    protected:
    string name;
    public:
    void work()
    {
        cout<<" Helo";
    }
   
    
};
class student:public Human
{
    protected:
    int age;
    
};
class Data:public student
{
    protected: 
    int cl;
    public:
    Data(int cl,int age,string name)
    {
        this->cl=cl;
        this->age=age;
        this->name=name;
    }

    void display()
    {
        cout<<name<<"  "<<age<<"  "<<cl<<"  ";
    }
};
int main()
{
    Data A(14,19,"Ali Haider");
    A.display();
    A.work();

}