#include <iostream>
using namespace std;
class A
{
private:
    int privateA;
protected:
    int protectedA;
public:
    A(int pA, int prA) : privateA(pA), protectedA(prA) {}
    friend void displayData(const A& a, const B& b, const C& c);
};
class B {
private:
    int privateB;
protected:
    int protectedB;
public:
    B(int pB, int prB) : privateB(pB), protectedB(prB) {}
    friend void displayData(const A& a, const B& b, const C& c);
};
class C {
private:
    int privateC;
protected:
    int protectedC;
public:
    C(int pC, int prC) : privateC(pC), protectedC(prC) {}
    friend void displayData(const A& a, const B& b, const C& c);
};
void displayData(const A& a, const B& b, const C& c)
{
    cout << "Accessing data from class A:" << endl;
    cout << "Private A: " << a.privateA << endl;
    cout << "Protected A: " << a.protectedA << endl;

    cout << "\nAccessing data from class B:" << endl;
    cout << "Private B: " << b.privateB << endl;
    cout << "Protected B: " << b.protectedB << endl;

    cout << "\nAccessing data from class C:" << endl;
    cout << "Private C: " << c.privateC << endl;
    cout << "Protected C: " << c.protectedC << endl;
}
int main() {
    A a(10, 20);
    B b(30, 40);
    C c(50, 60);
    displayData(a, b, c);
    return 0;
}
