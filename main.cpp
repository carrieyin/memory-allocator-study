#include <iostream>
#include "src/Complex.h"
#include "src/Srceen.h"
#include "ClassA.h"

int main() {
    /*Complex com(3,5);
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

    delete [] p2;

    //palcement new
    Complex* p4 = (Complex*) malloc(sizeof(Complex));
    new(p4)Complex(8, 8);
    cout<<"p4:"<<*p4<<endl;
    delete p4;
    //p->Complex::Complex(3,5); contructor无法直接调用*/

   /* int i;
    char* ph = "hello";
    printf("ph addr is: %d\n", ph);
    cout<<"ph:"<<*ph<<endl;
    int ip = reinterpret_cast<int>(ph);
    cout<<"ip:"<<ip<<endl;*/

   //测试screen operator new
	/*for (int i = 0; i < 30; i++) {
		new Screen(i);
	}*/

	cout << sizeof(ClassA);
    return 0;
}
