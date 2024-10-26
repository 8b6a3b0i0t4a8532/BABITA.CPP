// write a c++ program to display all the ASCII value of uppercase alphbets

#include <iostream>
using namespace std;

int main()
 {
 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c);
 return 0;
}