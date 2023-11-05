#include <iostream>

enum E {
 e1 = 1,
 e2 = 2,
 e3 = 0xfffffff0
};

int main()
{
 bool b = e1 < e3;
 std::cout << std::boolalpha << b << std::endl;
}

/* 
# 不同编译器结果不同
❯ clang++ 14-3.cpp -o 14-3.out -std=c++11
❯ ./14-3.out
true
 */