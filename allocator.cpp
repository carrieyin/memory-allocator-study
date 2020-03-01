#include "allocator.h"

void * MyAllocator::allocate(size_t size)
{
	obj* p;
	if (NULL == headOfFreelist)
	{
		headOfFreelist = (obj*)malloc(size * MEME_SIZE);
		obj* p = headOfFreelist;
		for (int i = 0; i < MEME_SIZE - 1; i++) {
			p->next = (obj*)((char*)p + size);
			p = p->next;
		}
		p->next = NULL;

	}
	p = headOfFreelist;
	headOfFreelist = headOfFreelist->next;
	return p;
	
}

void MyAllocator::dellocate(void * p, size_t size)
{
	((obj*)p)->next = headOfFreelist;
	headOfFreelist = (obj*)p;
}
