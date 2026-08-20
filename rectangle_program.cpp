




#include<iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:

    // Parameterized Constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Function to take input
    void set() {
        cin >> length >> breadth;
    }

    // Function to swap values
    void mystery() {
        int temp;
        temp = length;
        length = breadth;
        breadth = temp;
    }

    // Function to calculate area
    void area() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main() {

    // Object creation
    Rectangle Obj1(100, 200);

    Obj1.area();
    Obj1.mystery();
    Obj1.area();
    Obj1.mystery();
    Obj1.area();

    return 0;
}


