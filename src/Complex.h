//
// Created by yindd on 2020/1/1.
//

#ifndef MEMORY_ALLOCATOR_STUDY_COMPLEX_H
#define MEMORY_ALLOCATOR_STUDY_COMPLEX_H

#include <ostream>

using namespace std;

class Complex {
public:
    void* operator new (size_t size);
    void* operator new (size_t size, void* pVoid);

    void operator delete (void* p);
    Complex(int ir = 0, int im = 0);

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
