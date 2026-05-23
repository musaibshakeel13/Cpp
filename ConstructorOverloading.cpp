#include <iostream>
using namespace std;

class Musaib__HONESTSTUDENT{
    int x, y;

public:

    // Default Constructor
    Musaib__HONESTSTUDENT(){
        x = 0;
        y = 0;

        cout << "Default Constructor Called" << endl;
        cout << "x = " << x << " y = " << y << endl;
    }

    // Parameterized Constructor
    Musaib__HONESTSTUDENT(int a, int b){
        x = a;
        y = b;

        cout << "Parameterized Constructor Called" << endl;
        cout << "x = " << x << " y = " << y << endl;
    }

    // Single Parameter Constructor
    Musaib__HONESTSTUDENT(int a){
        x = a;
        y = 100;

        cout << "Single Parameter Constructor Called" << endl;
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main(){

    // Default constructor
    Musaib__HONESTSTUDENT o1;

    cout << endl;

    // Two parameter constructor
    Musaib__HONESTSTUDENT o2(10,20);

    cout << endl;

    // One parameter constructor
    Musaib__HONESTSTUDENT o3(50);

    return 0;
}
