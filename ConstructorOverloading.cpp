#include <iostream>
using namespace std;

class Student {
    string name;
    int age;

public:
    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Constructor with one parameter
    Student(string n) {
        name = n;
        age = 0;
    }

    // Constructor with two parameters
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;              // Calls Student()
    Student s2("Rahul");     // Calls Student(string)
    Student s3("Aman", 20);  // Calls Student(string, int)

    s1.display();
    s2.display();
    s3.display();

    return 0;
}

