#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <optional>

template <class T>
class Stack
{
public:
    struct linklst
    {
        T element;
        linklst* next;
    };

    linklst* top;


    Stack();
    ~Stack();
    void push(T element);
    std::optional<T> pop();
    T minimum();
    bool isempty();
    int size();
    void print();
};

#endif // STACK_H
