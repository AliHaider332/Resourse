#include<iostream>
using namespace std;
class Human
{
    protected:
    string name;
    Human()
    {
        cout<<"I am a Humman "<<endl;
    }
};
class worker:public Human
{    
    
    int salary;
    public:
    worker(string name,int salary)
    {
        this->name=name;
        this->salary=salary;
    }
    void display()
    {
        cout<<"Name i:  "<<name<<"  salary is   "<<salary;
    }
};
class student:public Human
{
    int roll;
    public:
    student(string name,int roll)
    {
        this->name=name;
        this->roll=roll;
    }
    void display()
    {
        cout<<"Name is:   "<<name<<"  roll is"<<roll;
    }
};

int main()
{
    student a("Ali Haider",8677);
    a.display();
    worker b("Moman",10000000);
    
    b.display();
}