#include <iostream>
using namespace std;

class ArrayDemo {
private:
    int arr1D[5];
    int arr2D[3][3];

public:
    void initialize() {
        // Initialize 1D array
        for (int i = 0; i < 5; i++) {
            arr1D[i] = i + 1;
        }

        // Initialize 2D array
        int value = 1;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr2D[i][j] = value++;
            }
        }
    }

    void display() {
        cout << "1D Array: ";
        for (int i = 0; i < 5; i++) {
            cout << arr1D[i] << " ";
        }
        cout << endl;

        cout << "2D Array:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << arr2D[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    ArrayDemo arrDemo;

    // Initialize arrays
    arrDemo.initialize();

    // Display arrays
    arrDemo.display();

    return 0;
}

