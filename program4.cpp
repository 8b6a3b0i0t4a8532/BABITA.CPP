// write a program to check character is vowel or consonant

#include <iostream>  
using namespace std;  
int main()
{  
    char character;  
    cout << "Enter a character: ";  
    cin >> character;  
    character = tolower(character);  
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') 
    {  
        cout << character << " is a vowel." << endl;  
    }
    else
    {  
        cout << character << " is a consonant." << endl;  
    }  
    return 0;  
}  