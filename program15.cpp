//write a c++ program display the sum of first n natural numbers using default constructor

#include <iostream>
using namespace std;

class NaturalNumberSum {
private:
    int n;   
    int sum; 

public:
    
    NaturalNumberSum() : n(0), sum(0) {
        cout << "Enter the value of n: ";
        cin >> n;
        calculateSum();
    }

        void calculateSum() {
        sum = n * (n + 1) / 2; 
    }

        void displaySum() {
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    NaturalNumberSum nSum;
    nSum.displaySum();

    return 0;
}
