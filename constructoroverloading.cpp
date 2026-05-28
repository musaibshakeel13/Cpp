#include <iostream>
using namespace std;

class YourName_24117_YOURSECRET
{
    int x, y;

public:
    // Default constructor
    YourName_24117_YOURSECRET()
    {
        x = 0;
        y = 0;
    }

    // Parameterized constructor (one parameter)
    YourName_24117_YOURSECRET(int a)
    {
        x = a;
        y = 0;
    }

    // Parameterized constructor (two parameters)
    YourName_24117_YOURSECRET(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main()
{
    YourName_24117_YOURSECRET obj1;
    YourName_24117_YOURSECRET obj2(10);
    YourName_24117_YOURSECRET obj3(10, 20);

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}
