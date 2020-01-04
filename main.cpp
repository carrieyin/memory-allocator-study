#include <iostream>
#include "Complex.h"

int main() {
    Complex com(3,5);
    cout<<com;
    Complex* p = new Complex(6, 7);
    Complex* pComplext = new(p)Complex(1,2);
    cout<<*p<<endl;
    void* p1 = ::operator new(512);
    ::operator delete(p1);

    Complex* p2 = new Complex[5];
    Complex* p3 = p2;
    for(int i = 0 ; i < 5; i++){
        new (p3++)Complex (2, 5);
    }

    //p->Complex::Complex(3,5); contructor无法直接调用
    return 0;
}
