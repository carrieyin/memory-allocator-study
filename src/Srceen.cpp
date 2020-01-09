//
// Created by yindd on 2020/1/5.
//

#include <cstdlib>
#include "Srceen.h"

void *Screen::operator new(size_t size) {
    Screen* p;
    if(!pfree)
    {
        size_t sizeMalloc = chunkSize * size;
        //pfree = (Screen* )malloc(sizeMalloc);
        pfree = reinterpret_cast<Screen*>(new char[sizeMalloc]);

        p = pfree;
        while(p != &pfree[chunkSize - 1])
        {
            p->next = p + 1;
            p = p->next;
        }
        p = NULL;
    }
    p = pfree;
    pfree = pfree->next;
    return p;
}

void Screen::operator delete(void * pointer) {
    Screen* p = static_cast<Screen*>(pointer);
    p->next = pfree;
    pfree = p;
}
