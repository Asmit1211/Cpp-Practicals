#include <iostream>
using namespace std;

class Calculator {
private:
    int number;

public:
    void setNumber(int n) {
        number = n;
    }

    void printMultiplicationTable() {
        if (number <= 0) {
            cout << "Please enter a positive number" << endl;
        } else {
            for (int i = 1; i <= 10; i++) {
                cout << number << " x " << i << " = " << (number * i) << endl;
            }
        }
    }
};

int main() {
    Calculator calc;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    calc.setNumber(num);
    calc.printMultiplicationTable();

    return 0;
}

