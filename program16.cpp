//write a c++ program to swap two numbers using parameterized constructor

#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int a; 
    int b; 

public:
        SwapNumbers(int x, int y) : a(x), b(y) {}

        void swap() {
        int temp = a;
        a = b;
        b = temp;
    }

        void display() const {
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int num1, num2;

        cout << "Enter two numbers to swap: ";
    cin >> num1 >> num2;

    SwapNumbers swapNumbers(num1, num2);

     swapNumbers.swap();

        swapNumbers.display();

    return 0;
}
