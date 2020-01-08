//
// Created by yindd on 2020/1/5.
// allocator 1
//

#ifndef MEMORY_ALLOCATOR_STUDY_SRCEEN_H
#define MEMORY_ALLOCATOR_STUDY_SRCEEN_H


#include <cstddef>
#include <stdio.h>
class Screen {
public:
    Screen(int ie):i(ie){};
    int get(){return i;};

    void * operator new(size_t size);
    void operator delete (void*);
private:
    //数据成员
    int i;

public:
    //下一地址的指针
    Screen* next;
    //可用链表头指针
    static Screen* pfree;
    static int chunkSize;
};

Screen* Screen::pfree = NULL;
int Screen::chunkSize = 30;

#endif //MEMORY_ALLOCATOR_STUDY_SRCEEN_H
