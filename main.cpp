#include <iostream>
#include <cstdlib>
#include <string>
#include "Stack.h"
#include "Stack.cpp"

int main(int argc, char* argv[]) {

    srand(4541);

    int N = std::stoi(argv[1]);

    Stack<int> stack = Stack<int>();

    for (int i = 0; i < N; i++)
        stack.push(rand() % 1000);

    stack.print();

    std::cout << "Minimum is : " << stack.minimum() << std::endl;
    std::cout << "Calling pop() function for half the stack" << std::endl;

    for (int i = 0; i < N / 2; i++) {
        stack.pop();
    }

    stack.print();

    std::cout << "Minimum is : " << stack.minimum() << std::endl;
}
