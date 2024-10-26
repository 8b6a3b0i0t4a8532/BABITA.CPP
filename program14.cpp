//write a c++ program to display all the uppercase and lowercase alphabet

#include <iostream>
using namespace std;
void lowercaseAlphabets()
{
	for (int c = 97; c <= 122; ++c)
		cout << char(c) << " "; 
	cout << endl;
}

void uppercaseAlphabets()
{
	for (int c = 65; c <= 90; ++c)
		cout << char(c) << " "; 
	cout << endl;
}
int main()
{
	cout << "Uppercase Alphabets" << endl;
	uppercaseAlphabets();

	cout << "Lowercase Alphabets " << endl;
	lowercaseAlphabets();

	return 0;
}