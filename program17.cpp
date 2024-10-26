write a c++ program to display the sum of all positive numbers of array using copy constructor 

#include <iostream>
using namespace std;

class Array {
private:
    int* arr;
    int size;

public:
    Array(int s) : size(s) {
        arr = new int[size];
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    Array(const Array& other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = other.arr[i];
        }
    }
    ~Array() {
        delete[] arr;
    }

    int sumOfPositiveNumbers() const {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) {
                sum += arr[i];
            }
        }
        return sum;
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

        Array originalArray(n);

    Array copiedArray = originalArray;

    int sum = copiedArray.sumOfPositiveNumbers();
    cout << "The sum of all positive numbers in the array is: " << sum << endl;

    return 0;
}
