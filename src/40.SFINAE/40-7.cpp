#include <iostream>

// 试了一下，后面的等于 0 可以不要
// template <int I> void foo(char(*)[I % 2 == 0]) {
template <int I> void foo(char(*)[I % 2 == 0] = 0) {
	std::cout << "I % 2 == 0" << std::endl;
}
template <int I> void foo(char(*)[I % 2 == 1] = 0) {
	std::cout << "I % 2 == 1" << std::endl;
}

int main()
{
	char a[1];
	foo<1>(&a);
	foo<2>(&a);
	foo<3>(&a);
}


/* 
❯ cd src/40.SFINAE
❯ g++ 40-7.cpp -o 40-7.out -std=c++11
❯ ./40-7.out
I % 2 == 1
I % 2 == 0
I % 2 == 1

这里是谁替换成功选哪个函数
 */