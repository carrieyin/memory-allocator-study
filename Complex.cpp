//
// Created by yindd on 2020/1/1.
//

#include <iostream>
#include "Complex.h"


Complex::Complex(int ir, int im) : ir(ir), im(im) {
}

int Complex::getIr() const {
    return ir;
}

void Complex::setIr(int ir) {
    Complex::ir = ir;
}

int Complex::getIm() const {
    return im;
}

void Complex::setIm(int im) {
    Complex::im = im;
}

ostream& operator<<(ostream& out, const Complex& com){
    out<<"["<<com.getIr()<<","<<com.getIm()<<"]"<<endl;
    return out;
}

void *Complex::operator new(size_t size) {
    void * p = malloc(sizeof(Complex));
    cout<<"P malloc"<<endl;
    return p;
}
