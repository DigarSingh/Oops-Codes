#include <iostream>
using namespace std;

int main() {
    // Dynamic memory allocation for a single integer
    int *ptr = new int;
    *ptr = 42;
    cout << "Single integer value: " << *ptr << endl;
    cout << "Address: " << ptr << endl;

    // Deallocation
    delete ptr;

    // Dynamic memory allocation for an array
    int size;
    cout << "\nEnter size of array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter " << size << " elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "You entered:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocation of array
    delete[] arr;

    return 0;
}
