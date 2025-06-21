#include<iostream>
using namespace std;
class Human
{
    protected:
    string name;
    Human()
    {
        cout<<"I am a Humman and my name is  "<<name;
    }
};
class youtuber
{
    protected:
    int subscriber;
    youtuber()
    {
        cout<<"I am a youtuber and my subsriber are: "<<subscriber;

    }
};
class student:public Human,public youtuber
{
    protected:
    int ag;
    public:
    student(string name,int subscriber,int ag)
    {
        this->name=name;
        this->subscriber=subscriber;
        this->ag=ag;
    }
    void display()
    {
        cout<<"My name is  "<<name<<"my subsribers are  "<<subscriber<<"my ag is"<<ag;
    }
};
int main()
{
     student a("Ali Haider",1,8677);
     a.display();
}