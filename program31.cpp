#include <iostream>
using namespace std;
class Number {
private:
    int a;
public:
    Number(int value) : a(value) {}
    void display() const {
        cout << "Value of a: " << a << endl;
    }
    Number& operator++() {
        a += 5;
        return *this;
    }
    Number& operator--() {
        a -= 1;
        return *this;
    }
    friend Number operator-(const Number& num);
};
Number operator-(const Number& num) {
    Number temp(-num.a); // Create a temporary object with negated value of 'a'
    return temp;
}
int main() {
    Number num(10);
    cout << "Initial ";
    num.display();
    ++num;
    cout << "After incrementing by 5: ";
    num.display();
    --num;
    cout << "After decrementing by 1: ";
    num.display();
    num = -num;
    cout << "After negation (sign change): ";
    num.display();
    return 0;
}
