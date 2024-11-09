#include <iostream>
using namespace std;
template <typename T>
T add(T a, T b) {
    return a + b;
}
template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}
template <typename T>
T add(T a, T b, T c, T d) {
    return a + b + c + d;
}
int main() {
    cout << "Sum of 10 and 20: " << add(10, 20) << endl;
    cout << "Sum of 10, 20, and 30: " << add(10, 20, 30) << endl;
    cout << "Sum of 10, 20, 30, and 40: " << add(10, 20, 30, 40) << endl;
    cout << "Sum of 1.5 and 2.5: " << add(1.5, 2.5) << endl;
    cout << "Sum of 1.5, 2.5, and 3.5: " << add(1.5, 2.5, 3.5) << endl;
    return 0;
}
