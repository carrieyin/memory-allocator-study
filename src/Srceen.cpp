//
// Created by yindd on 2020/1/5.
//

#include <cstdlib>
#include "Srceen.h"

void *Screen::operator new(size_t size) {
    Screen* p;
    if(!pfree){
        size_t sizeMalloc = chunkSize * size;
        //pfree = (Screen* )malloc(sizeMalloc);
        pfree = reinterpret_cast<Screen*>(new char[sizeMalloc]);

        Screen* p = pfree;
        while(p != NULL){
            p->next = p + 1;
            p = p->next;
        }
    }
    p = pfree;
    pfree = pfree->next；
    return p;
}

void Screen::operator delete(void * pointer) {
    Screen* p = reinterpret_cast<Screen*>(pointer);
    p->next = pfree;
    pfree = p;
}
