#pragma once
#include <cstdlib>

class MyAllocator
{
private:
	struct obj 
	{
		struct obj* next;
	};
public:
	int MEME_SIZE = 5;
	obj* headOfFreelist = 0;

public:
	void* allocate(size_t size);
	void dellocate(void*p, size_t size);
};

