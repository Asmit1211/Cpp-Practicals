#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
    float gpa;

public:
    void setData(string n, int a, float g) {
        name = n;
        age = a;
        gpa = g;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "GPA: " << gpa << endl;
    }
};

int main() {
    Student student1;
    student1.setData("Asmit", 20, 3.9);
    student1.displayData();

    return 0;
}

