WAP to display the sum of two numbers using multiple inheritance where one number is declared in first base class and one number declared in second base class function is defined in the derived class to sum two numbers

#include <iostream>
using namespace std;
class Base1 {
protected:
    int num1; 
public:
        void setNum1(int n) {
        num1 = n;
    }
};

class Base2 {
protected:
    int num2;

public:
       void setNum2(int n) {
        num2 = n;
    }
};

class Derived : public Base1, public Base2 {
public:
        void displaySum() {
        int sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    Derived obj;

    int number1, number2;

    cout << "Enter the first number: ";
    cin >> number1;
    obj.setNum1(number1);

    cout << "Enter the second number: ";
    cin >> number2;
    obj.setNum2(number2);

        obj.displaySum();
    return 0;
}
