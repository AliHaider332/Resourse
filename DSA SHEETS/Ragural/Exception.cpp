#include <iostream>
#include <exception>
using namespace std;

class add 
{
public:
    int a, b;

    add(int a, int b) 
    {
        this->a = a;
        this->b = b;
    try
   {
            if (b == 0) 
            {
                throw runtime_error("Division by zero error");
            }
            cout << a / b;
    } 
        catch (const exception &e) 
        {
            cout << "Exception occurred: " << e.what() << endl;
        }
    }
};

int main() 
{
    add a(4, 0);
    return 0;
}
