WAC++P to create a hybrid inheritance where we have five classes A, B, C, D and E class B, c and D inherit form class A and class E inherit from class B

#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A: Base class" << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Class B: Derived from A" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Class C: Derived from A" << endl;
    }
};

class D : public A {
public:
    void showD() {
        cout << "Class D: Derived from A" << endl;
    }
};


class E : public B {
public:
    void showE() {
        cout << "Class E: Derived from B" << endl;
    }
};

int main() {
        A a;
    B b;
    C c;
    D d;
    E e;

    // Call methods from each class
    a.display();  // From class A
    b.display();  // Inherited from class A
    b.showB();    // From class B
    c.display();  // Inherited from class A
    c.showC();    // From class C
    d.display();  // Inherited from class A
    d.showD();    // From class D
    e.display();  // Inherited from class A
    e.showB();    // Inherited from class B
    e.showE();    // From class E

    return 0;
}
