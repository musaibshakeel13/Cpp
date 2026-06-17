#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    Student()
    {
        name = "Unknown";
        age = 0;
    }

    Student(string n)
    {
        name = n;
        age = 0;
    }

    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Student s1;
    Student s2("Musaib");
    Student s3("Musaib", 20);

    cout << "Object 1:" << endl;
    s1.display();

    cout << "\nObject 2:" << endl;
    s2.display();

    cout << "\nObject 3:" << endl;
    s3.display();

    return 0;
}

