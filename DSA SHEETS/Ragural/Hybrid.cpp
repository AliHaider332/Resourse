#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    student()
    {
        cout<<"I am A studenr"<<endl;
    }

};
class male
{
    public:
    male()
    {
    cout<<"I am male"<<endl;
    }
};
class female
{
    public:
    female()
    {
    cout<<"I am female"<<endl;
    }
};
class boy:public student,public male
{
    public:
    boy(string name)
    {
        this->name=name;
    }
    void display()
    {
        cout<<name<<endl;
        student();
        male();

    }
};
class girl:public student,public female
{
    public:
    girl(string name)
    {
        this->name=name;
    }
    void display()
    {
        cout<<name<<endl;
        student();
        female();

    }
};
int main()
{
   boy a("Ali Haider");
   a.display();
}