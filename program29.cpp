#include <iostream>
using namespace std;
class SumCalculator 
{
public:
    int sum(int a, int b) 
{
        return a + b;
    }
    int sum(int a, int b, int c)
{
        return a + b + c;
    }
    int sum(int a, int b, int c, int d)
{
        return a + b + c + d;
    }
};
int main() 
{
    SumCalculator calc;
    int result1 = calc.sum(5, 10);              
    int result2 = calc.sum(5, 10, 15);           
    int result3 = calc.sum(5, 10, 15, 20);      
    cout << "Sum of two numbers: " << result1 << endl;
    cout << "Sum of three numbers: " << result2 << endl;
    cout << "Sum of four numbers: " << result3 << endl;
    return 0;
}
