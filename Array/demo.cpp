#include <iostream>
using namespace std;

class Array {
    int a[10];  // Array to hold the values

public:
    Array() {  // Constructor to initialize array
        int values[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        for (int i = 0; i < 10; i++) {
            a[i] = values[i];  // Initialize array values
        }
    }

    // Method to display the array
    void show() const {
        for (int i = 0; i < 10; i++) {
            cout << a[i] << "\t";
        }
        cout << endl;
    }

    // Method to reverse the array using dynamic memory allocation (similar to 'm' in C code)
    void reverseWithMalloc() {
        int* b = new int[10];  // Dynamically allocate memory for reverse array
        for (int i = 9, j = 0; i >= 0; i--, j++) {
            b[j] = a[i];  // Reverse array
        }
        for (int i = 0; i < 10; i++) {
            a[i] = b[i];  // Copy reversed elements back to array
        }
        delete[] b;  // Free allocated memory
    }

    // Method to reverse the array in-place (like 'm2' in C code)
    void reverseInPlace() {
        for (int i = 0, j = 9; i < j; i++, j--) {
            swap(a[i], a[j]);  // Use built-in swap function
        }
    }
};

int main() {
    Array ab;  // Create object of Array class
    ab.show();  // Show original array

    // Uncomment the below lines if you want to test the reverseWithMalloc method
    // cout << "\nAfter reverse with malloc:\n";
    // ab.reverseWithMalloc();
    // ab.show();

    cout << "\nAfter reverse in-place:\n";
    ab.reverseInPlace();  // Reverse the array in-place
    ab.show();  // Show reversed array

    return 0;
}
