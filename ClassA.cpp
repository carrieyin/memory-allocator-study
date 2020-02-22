#include "ClassA.h"
#include <stdlib.h>

int ClassA::MEM_SIZE = 512;
ClassA* ClassA::freelist = NULL;

/*****************************************************************************
* @function name : 
* @author : yindd
* @date : 2020/2/15 21:50
* @inparam :  
* @outparam : int
* @last change : 
*****************************************************************************/
void * ClassA::operator new(size_t size)
{
	if (NULL == freelist)
	{
		freelist = (ClassA*) malloc(sizeof(ClassA) * ClassA::MEM_SIZE);
		ClassA* pa = freelist;

		for (int i = 0; i < MEM_SIZE; i++)
		{
			pa[i].next = &pa[i + 1];
		}
		pa->next = NULL;

		return freelist;
	}

	freelist = freelist->next;
	return freelist;
	
}

void ClassA::operator delete(void * deadobject, size_t size)
{
	if (deadobject = 0)
	{
		return;
	}
	ClassA* pobject = static_cast<ClassA*> (deadobject);
	pobject->next = freelist;
	freelist = pobject;

	return ;
}


/*****************************************************************************
* @function name : 
* @author : yindd
* @date : 2020/2/15 21:52
* @inparam :  
* @outparam : int
* @last change : 
*****************************************************************************/

ClassA::ClassA()
{
}

/*****************************************************************************
* @function name : 
* @author : yindd
* @date : 2020/2/15 21:59
* @inparam :  
* @outparam : 
* @last change : 
*****************************************************************************/
ClassA::~ClassA()
{

}
