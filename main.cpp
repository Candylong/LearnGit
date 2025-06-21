#include <iostream>
#include "template.h"
int main(int argc, char** argv)
{
    int result = sum(1, 2);
    int a =1, b = 2;
    sum(a, b);
    const int c = 1, d = 2;
    sum(c, d);
    const int& num = a;
    int* const p = &a;
    Test<int, int> a1(p, p);
    std::cout<< "sum result: "<<result << std::endl;
    return 0;
}

void display(int a)
{

}

void display(int& a)
{

}

void display(const int& a)
{

}

// void display(int* a)
// {

// }

void display(const int* a)
{

}

void display(int* const a)
{

}

