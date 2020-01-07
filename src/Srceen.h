//
// Created by yindd on 2020/1/5.
// allocator 1
//

#ifndef MEMORY_ALLOCATOR_STUDY_SRCEEN_H
#define MEMORY_ALLOCATOR_STUDY_SRCEEN_H


#include <cstddef>

class Screen {
public:
    Screen(int ie):i(ie){};
    int get(){return i;};

    void * operator new(size_t size);
    void operator delete (void*);
private:
    //数据成员
    int i;

private:
    //下一地址的指针
    Screen* next;
    //可用链表头指针
    static Screen* free;
};


#endif //MEMORY_ALLOCATOR_STUDY_SRCEEN_H
