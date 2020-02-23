#pragma once
#include "allocator.h"
class Foo
{
private:
	long miles;
	char des;
public:
    static void* operator new(size_t size);
	static void operator delete(void* obj, size_t size);
	static MyAllocator myAllocator;
public:
	Foo(long m);
	
};

