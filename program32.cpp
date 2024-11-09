#include <iostream>
using namespace std;
class Number {
private:
    int value;
public:
    Number(int v = 0) : value(v) {}
    void display() const {
        cout << "Value: " << value << endl;
    }
    Number operator+(const Number& num) const {
        return Number(value + num.value);
    }
    Number operator-(const Number& num) const {
        return Number(value - num.value);
    }
    friend Number operator+(const Number& num1, const Number& num2);
    friend Number operator-(const Number& num1, const Number& num2);
};
Number operator+(const Number& num1, const Number& num2) {
    return Number(num1.value + num2.value);
}
Number operator-(const Number& num1, const Number& num2) {
    return Number(num1.value - num2.value);
}
int main() {
    Number num1(10), num2(5);
    Number result1 = num1 + num2;
    Number result2 = num1 - num2;
  
    cout << "Using member functions:" << endl;
    cout << "Sum of num1 and num2: ";
    result1.display();
    cout << "Difference of num1 and num2: ";
    result2.display();

    Number result3 = operator+(num1, num2);
    Number result4 = operator-(num1, num2);

    cout << "\nUsing friend functions:" << endl;
    cout << "Sum of num1 and num2: ";
    result3.display();
    cout << "Difference of num1 and num2: ";
    result4.display();

    return 0;
}
