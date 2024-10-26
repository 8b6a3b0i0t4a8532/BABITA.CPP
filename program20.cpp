WAP to display the sum of two numbers using multilevel inheritance where one number is declared in base class and one number declared in first derived class function is defined in the second derived class to sum two numbers

#include <iostream>
using namespace std;

class Base {
protected:
    int num1; 
public:
    void setNum1(int n) {
        num1 = n;
    }
};

class Derived1 : public Base {
protected:
    int num2; 
public:
            num2 = n;
    }
};

class Derived2 : public Derived1 {
public:
        void displaySum() {
        int sum = num1 + num2;
        cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
    }
};

int main() {
    Derived2 obj;

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
