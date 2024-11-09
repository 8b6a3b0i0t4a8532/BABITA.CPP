#include <iostream>
#include <string>
using namespace std;
template <typename T>
struct Student {
    T name;
    int age;
    T course;
    T department;
    Student(T n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}
    void displayStudentData() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};
int main() {
    Student<string> student1("Alice", 20, "Computer Science", "Engineering");
    Student<string> student2("Bob", 22, "Mechanical Engineering", "Engineering");
    cout << "Student 1 Data:" << endl;
    student1.displayStudentData();
    cout << "\nStudent 2 Data:" << endl;
    student2.displayStudentData();
    return 0;
}
