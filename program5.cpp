// write a program to check number is composite or not

#include <iostream>
using namespace std;
int main()
{
    int i,n,cout=0;
    for (i=1;i<=n;i++)
    {
        if(n % i==0)
        {
            cout++=1;
        }
        if(cout == 3)
        {
            cout<<"composite";
        }
    }
    return 0;
}

