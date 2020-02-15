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

	}

	return nullptr;
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
