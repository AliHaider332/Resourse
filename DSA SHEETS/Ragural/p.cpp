#include<iostream>
using namespace std ;
class Teacher
{
    protected:
    int attandance;
    int syllabus;
    int class_room;
    public:
    Teacher()
    {
        cout<<"I am Parent class constructor:"<<endl;
    }
    ~Teacher()
    {
        cout<<"I am Parent"<<endl;
    }
};
class student: private Teacher
{
    public:
    string name;
    int Ag;
    student(string name,int Ag,int attandance,int syllabus,int class_room)
    {
        this->name=name;
        this->Ag=Ag;
        this->attandance=attandance;
        this->syllabus=syllabus;
        this->class_room=class_room;
        cout<<"I am child class constructor:"<<endl;
    }
    void display()
    {
        cout<<"  "<<name<<"  "<<Ag<<"  "<<class_room<<"  "<<attandance<<"  "<<syllabus<<"  ";
    }
    ~student()
    {
        cout<<"I am child class distructor"<<endl;
    }
    

};
int main()
{
    student A("Ali Haider",8677,90,6,14);
    
    A.display();
}