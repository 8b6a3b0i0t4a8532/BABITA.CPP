// write a program to check number is divisible by 10

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter the number:";
    cin>>num;
    if (num % 10 == 0)
       cout<<"the number is divisible by 10";
    else
       cout<<"the number is not divisible by 10";
return 0;
}