#include <iostream>
using namespace std;
class A;
class B;
class C;
class FriendClass {
public:
    void displayData(A& a, B& b, C& c);
};
class A
{
private:
    int privateA;
protected:
    int protectedA;
public:
    A(int pA, int prA) : privateA(pA), protectedA(prA) {}
    friend class FriendClass;
};
class B 
{
private:
    int privateB;
protected:
    int protectedB;
public:
    B(int pB, int prB) : privateB(pB), protectedB(prB) {}
    friend class FriendClass;
};
class C 
{
private:
    int privateC;
protected:
    int protectedC;
public:
    C(int pC, int prC) : privateC(pC), protectedC(prC) {}
    friend class FriendClass;
};
void FriendClass::displayData(A& a, B& b, C& c) {
    cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
    cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
    cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
}
int main() {
    A a(10, 20);
    B b(30, 40);
    C c(50, 60);
    FriendClass friendClass;
    friendClass.displayData(a, b, c);
    return 0;
}
