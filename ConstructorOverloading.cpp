

#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

public:
    // Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
    }

    // Parameterized Constructor
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
    }

    // Display Function
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    // Calls Default Constructor
    Student s1;

    // Calls Parameterized Constructor
    Student s2(101, "Musaib");

    cout << "Student 1:" << endl;
    s1.display();

    cout << "\nStudent 2:" << endl;
    s2.display();

    return 0;
}


