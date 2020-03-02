#include <iostream>
#include "src/Complex.h"
#include "src/Srceen.h"
#include "ClassA.h"
#include "Foo.h"
#include "ClassB.h"
#include <vector>
#include <array>

int compareint(const void* a, const void* b) {
	if (*(int*)a > *(int*)b) {
		return 1;
	}
	else
	{
		return -1;
	}
}
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

	/*cout << sizeof(ClassA);
	size_t const N = 100;
	ClassA* p[N];
	for (int i = 0; i < 100; i++)
	{
		p[i] = new ClassA();
	}
		
	p[0]->setab('A', 1000);
	p[1]->setab('B', 1001);
	p[2]->setab('C', 1002);
	p[3]->setab('D', 1003);

	for (int i = 0; i < 4; i++)
	{
		cout << p[i]->geta() << "," << p[i]->getb() << endl;
	}

	for (int i = 0; i < 4; i++)
	{
		delete p[i];
	}*/

	/*Foo* p[100];
	for (int i = 0; i < 20; i++) {
		p[i] = new Foo(i);
		cout << p[i] << endl;
	}

	for (int i = 0; i < 20; i++)
	{
		delete p[i];
	}*/

	cout << sizeof(ClassB);

    

	vector<int> vec;
	vec.push_back(1);
	vec.push_back(56);
	/*for (int i:vec)
	{
		cout << i<<endl;
	}*/

	vector<int>::iterator iter = vec.begin();
	for (;iter != vec.end(); iter++)
	{
		cout << *iter << endl;
	}

	for (auto elem : vec) {
		cout << elem << endl;
	}

	for (auto& elem : vec) {
		elem *= 3;
		cout << elem << endl;
	}

	//std::array<int, 5> app = {56, 78,12,1, 9};
	int app[5] = { 56, 78,12,1, 9 };
	qsort(app, 5, sizeof(int),compareint );
	for (int i : app) {
		cout << i << endl;
	}
	return 0;
}
