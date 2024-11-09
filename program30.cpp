#include <iostream>
using namespace std;
class Base
{
public:
    virtual int sum(int a, int b, int c) 
{
        cout << "Base class sum: ";
        return a + b + c;
    }
};
class Derived : public Base 
{
public:
    int sum(int a, int b, int c) override {
        cout << "Derived class sum: ";
        return a + b + c;
    }
};
int main() {
    Base baseObj;          
    Derived derivedObj;    
    Base* ptr;             
    ptr = &derivedObj;
    cout << ptr->sum(10, 20, 30) << endl;
    cout << baseObj.sum(5, 15, 25) << endl;
    return 0;
}
