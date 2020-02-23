#include "Foo.h"
#include "allocator.h"


MyAllocator Foo::myAllocator;

void * Foo::operator new(size_t size)
{
	return myAllocator.allocate(size);
}

void Foo::operator delete(void * obj, size_t size)
{
	return myAllocator.dellocate(obj, size);
}


Foo::Foo(long m)
{
	miles = m;
}


