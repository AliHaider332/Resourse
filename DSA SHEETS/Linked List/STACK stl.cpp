#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
int main()
{
    stack<int>arr;
    arr.push(11);
    arr.push(22);
    arr.push(33);
    arr.push(44);
    arr.push(55);
    arr.push(66);
    arr.pop();
    while (!arr.empty())
    {
        cout << arr.top() << " ";
        arr.pop();
    }
}