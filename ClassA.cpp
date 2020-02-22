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
		//ClassA*  pa = (ClassA*) malloc(sizeof(ClassA) * ClassA::MEM_SIZE);
		ClassA* pa = static_cast<ClassA*>(::operator new(sizeof(ClassA)* MEM_SIZE));
		
		for (int i = 1; i < MEM_SIZE; i++)
		{
			pa[i].next = &pa[i + 1];
		}
		pa[MEM_SIZE -1].next = NULL;
		freelist = &pa[1];
		return pa;
		
	}

	freelist = freelist->next;
	return freelist;
	
}

void ClassA::operator delete(void * deadobject, size_t size)
{
	if (deadobject == 0)
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
