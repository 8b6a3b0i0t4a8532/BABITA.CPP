#include <iostream>
using namespace std;
class PrimeChecker; 
class Number {
private:
    int num;
public:
    Number(int n) : num(n) {} 
    friend class PrimeChecker;
};
class PrimeChecker
{
public:
    bool isPrime(const Number &n) {
        if (n.num <= 1)
            return false;
        for (int i = 2; i * i <= n.num; i++) {
            if (n.num % i == 0)
                return false;
        }
        return true;
    }
};
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    Number n(number);
    PrimeChecker checker;
    if (checker.isPrime(n)) 
    {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
    return 0;
}
