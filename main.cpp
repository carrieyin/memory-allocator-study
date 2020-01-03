#include <iostream>
#include "Complex.h"

int main() {
    Complex com(3,5);
    cout<<com;
    Complex* p = new Complex(6, 7);
    //p->Complex::Complex(3,5); contructor无法直接调用
    return 0;
}
