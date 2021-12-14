#include "Stack.h"

template <class T>
Stack<T>::Stack() : top(nullptr) {};

template <class T>
Stack<T>::~Stack()
{
    while (!isempty())
    {
        linklst* next = top;
        top = top->next;
        delete next;
    }
};

template <class T>
void Stack<T>::push(T element)
{
    linklst* next = new linklst();
    next->element = element;
    next->next = top;
    top = next;
};

template <class T>
std::optional<T> Stack<T>::pop()
{
    if (!isempty())
    {
        linklst* next = top;
        top = top->next;
        T element = next->element;
        delete next;
        return element;
    }
};

template <class T>
T Stack<T>::minimum()
{
    T min = top->element;
    linklst* next = top;
    while (next)
    {
        if (min > next->element)
            min = next->element;
        next = next->next;
    }
    return min;
};

template <class T>
bool Stack<T>::isempty()
{
    return (top == nullptr);
};

template <class T>
int Stack<T>::size()
{
    int size = 0;
    linklst* next = top;
    while (next)
    {
        size++;
        next = next->next;
    }
    return size;
}

template <class T>
void Stack<T>::print()
{
    linklst* next = top;
    std::cout << "Print stack - ";
    while (next)
    {
       std::cout << next->element << " ";
       next = next->next;
    }
    std::cout << std::endl;
};
