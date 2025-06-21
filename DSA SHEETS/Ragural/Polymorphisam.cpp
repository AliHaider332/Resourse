//Function overloading in polymophisam
/*#include<iostream>
using namespace std;
class calculator
{
    public:
    void calculate(int a)
    {
        cout<<"Area of the circule is:  "<<3.17*a*a;
    }
    void calculate(int a, int b)
    {
        cout<<"Area of the Retangle is:  "<<a*b;
    }
};
int main()
{
    calculator A,B;
    A.calculate(3);
    B.calculate(3,4);
}*/
//Operator Overloading
/*#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
    Complex()
    {

    }
    
    Complex(int real,int img)
    {
        this->real=real;
        this->img=img;
    };
    void display()
    {
        cout<<real<<"+"<<img<<"i";
    }
    Complex operator +(Complex& c)
    {
        Complex ans(0,0);
        ans.real=real+c.real;
        ans.img=img+c.img;
        return ans;
    }
};
int main()
{
    Complex A(2,3);
    Complex B(4,5);
    Complex c=A+B;
    cout<<"The sum is:  ";
    c.display(); 
}*/
#include <iostream>
#include <vector>
using namespace std;

class animal {
public:
    virtual void sound() {
        cout << "sound\n";
    }

    // Virtual destructor to ensure proper cleanup of derived objects
    virtual ~animal() = default;
};

class dog : public animal {
public:
    void sound() override {
        cout << "bark\n";
    }
};

class cat : public animal {
public:
    void sound() override {
        cout << "meow\n";
    }
};

int main() {
    vector<animal*> Animal;
    Animal.push_back(new dog);
    Animal.push_back(new cat);

    // Display the sounds of all animals in the vector
    for (size_t i = 0; i < Animal.size(); ++i) {
        Animal[i]->sound();
    }

    // Clean up dynamically allocated memory
    for (size_t i = 0; i < Animal.size(); ++i) {
        delete Animal[i];
    }

    return 0;
}















