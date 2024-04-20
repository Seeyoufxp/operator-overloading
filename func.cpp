#include "head.h"

MyIntege::MyIntege()
{
    m_Num = 0;
}

std::ostream &operator<<(std::ostream &cout,MyIntege myint)
{
    std::cout << myint.m_Num;
    return std::cout;
}

MyIntege &MyIntege::operator++()
{
    m_Num++;
    return *this;
}

MyIntege MyIntege::operator++(int)
{
    MyIntege temp = *this;
    m_Num++;
    return temp;    
}

void test01()
{
    MyIntege myint;
    std::cout << ++myint << std::endl;
}

void test02()
{
    MyIntege myint;
    std::cout << myint++ << std::endl;
}