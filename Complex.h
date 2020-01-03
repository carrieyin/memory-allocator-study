//
// Created by yindd on 2020/1/1.
//

#ifndef MEMORY_ALLOCATOR_STUDY_COMPLEX_H
#define MEMORY_ALLOCATOR_STUDY_COMPLEX_H

#include <ostream>

using namespace std;

class Complex {
public:
    Complex(int ir, int im);

    int getIr() const;

    void setIr(int ir);

    int getIm() const;

    void setIm(int im);

    friend ostream& operator <<(ostream& out, const Complex& com);

private:
    int ir;
    int im;
};


#endif //MEMORY_ALLOCATOR_STUDY_COMPLEX_H
