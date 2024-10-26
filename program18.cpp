WAP to display sum of two integer values sum of two float values two char value using
 constructor overloading

#include <iostream>
using namespace std;

class Sum {
public:
    Sum(int a, int b) {
        cout << "Sum of integers: " << (a + b) << endl;
    }

    Sum(float a, float b) {
        cout << "Sum of floats: " << (a + b) << endl;
    }

    Sum(char a, char b) {
        cout << "Sum of characters: " << (static_cast<int>(a) + static_cast<int>(b)) << endl;
    }
};

int main() {
    int int1, int2;
    cout << "Enter two integers: ";
    cin >> int1 >> int2;
    Sum intSum(int1, int2); // Calls integer constructor

    float float1, float2;
    cout << "Enter two floats: ";
    cin >> float1 >> float2;
    Sum floatSum(float1, float2); // Calls float constructor

    char char1, char2;
    cout << "Enter two characters: ";
    cin >> char1 >> char2;
    Sum charSum(char1, char2); // Calls char constructor

    return 0;
}
