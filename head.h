#pragma once
#include <iostream>

void test01();
void test02();

class MyIntege
{
    friend std::ostream &operator<<(std::ostream &cout, MyIntege myint);
public:
    MyIntege();
    MyIntege &operator++();
    MyIntege operator++(int);

private:
    int m_Num;
};



