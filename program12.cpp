//write a program on tree recursion

#include <iostream>  
using namespace std;  
  
int sumOfNaturalNumbers(int n)
 {  
    if (n == 1) {  
        return 1;  
    }   
    return n + sumOfNaturalNumbers(n - 1);  
}  
  
int main()
 {  
    int n = 5;  
    int result = sumOfNaturalNumbers(n);  
    cout << "Sum of natural numbers from 1 to " << n << " is: " << result << endl;  
    return 0;  
}  
