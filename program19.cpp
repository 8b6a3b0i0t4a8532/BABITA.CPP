WAP to display the product  of two numbers using single inheritance where numbers are declared inside the base class function of product both number defined in the derived class 

#include <iostream>
using namespace std;

class Base {
protected:
    int num1;
    int num2;

public:
    void getNumbers() {
        cout << "Enter two integers: ";
        cin >> num1 >> num2;
    }
};

class Derived : public Base {
public:
    void displayProduct() {
        int product = num1 * num2;
        cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;
    }
};

int main() {
    Derived obj;
    
    obj.getNumbers();
    obj.displayProduct();

    return 0;
}
