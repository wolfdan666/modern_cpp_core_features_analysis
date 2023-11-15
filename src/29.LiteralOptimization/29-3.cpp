#include <iostream>

#define M(x, ...) __VA_ARGS__
int x[2] = { M(1'2,3'4) };

int main()
{
	// 需要c++14才能编译这部分
    // constexpr int y = 123'4'56;
    // static_assert(y == 0x1e'240);
    // static_assert(y == 036'11'0'0);
    // static_assert(y == 0b11'110'001'001'000'000);
    // std::cout << "Single quotation marks can be placed arbitrarily to denote "
    //              "numeric constants. y: "
    //           << y << std::endl;
    std::cout << "x[0] = " << x[0] << ", x[1] = " << x[1] << std::endl;
}

/* 
❯ g++ 29-3.cpp -o 29-3.out -std=c++11
❯ ./29-3.out
x[0] = 0, x[1] = 0

# 取消上面注释: 
❯ g++ 29-3.cpp -o 29-3.out -std=c++14
❯ ./29-3.out
Single quotation marks can be placed arbitrarily to denote numeric constants. y: 123456
x[0] = 34, x[1] = 0
 */