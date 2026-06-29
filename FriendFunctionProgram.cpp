
#include <iostream>
using namespace std;

class A{
    int x;

public:
    A(){
        x = 10;
    }

    friend void show(A);
};

void show(A obj){
    cout << obj.x;
}

int main(){
    A o1;

    show(o1);

    return 0;
}


