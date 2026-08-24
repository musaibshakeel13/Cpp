




#include <iostream>
using namespace std;

class Complex{
    int real, imag;

public:
    void setdata(int r,int i){
        real = r;
        imag = i;
    }

    void show(){
        cout << real << " + " << imag << "i" << endl;
    }

    void add(Complex c1, Complex c2){
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }
};

int main(){
    Complex c1,c2,c3;

    c1.setdata(2,3);
    c2.setdata(4,5);

    c3.add(c1,c2);

    c3.show();

    return 0;
}

