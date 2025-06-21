#include<iostream>
using namespace std;
class huamn
{
    public:
    string name;
    int age;
};
class youtuber:public virtual huamn
{
    protected:
    int sub;


};
class teacher :public virtual huamn
{
    protected:
    int salery;
};
class coder: public youtuber,public teacher
{
    public:
    coder(string name,int age,int sub,int salery)
    {
        this->name=name;
        this->age=age;
        this->sub=sub;
        this->salery=salery;
    }
    void display()
    {
        cout<<"My Name is  "<<name<<"  my age is  "<<age<<"  My Utube subscribers are   "<<sub<<"   and my salery is "<<salery<<endl;
    }
};

int main()
{
    coder a("Ali Haider",19,1,100000);
    a.display();
}