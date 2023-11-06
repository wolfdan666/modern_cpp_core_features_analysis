#include <iostream>

struct X {
  int i;
  short f;
};

// X x0{ 11, 7.0 }; // 编译失败，7.0从double转换到short是缩窄转换
X x1(11, (short)3);
X x2( 11, 7.0 ); // 仅gcc支持缩窄转换, 编译成功

int main() {
    return 0;
}

/* 
# 我的clang++的 c++20 版本竟然不能编译过小括号，可能clang版本有点低...
❯ clang++ 15-Parentheses.cpp -o 15-Parentheses.out -std=c++2a
15-Parentheses.cpp:9:3: error: no matching constructor for initialization of 'X'
X x1(11, (short)3);
  ^  ~~~~~~~~~~~~
15-Parentheses.cpp:3:8: note: candidate constructor (the implicit copy constructor) not viable: requires 1 argument, but 2 were provided
struct X {
       ^
15-Parentheses.cpp:3:8: note: candidate constructor (the implicit move constructor) not viable: requires 1 argument, but 2 were provided
15-Parentheses.cpp:3:8: note: candidate constructor (the implicit default constructor) not viable: requires 0 arguments, but 2 were provided
15-Parentheses.cpp:10:3: error: no matching constructor for initialization of 'X'
X x2( 11, 7.0 ); // 仅gcc支持编译成功
  ^   ~~~~~~~
15-Parentheses.cpp:3:8: note: candidate constructor (the implicit copy constructor) not viable: requires 1 argument, but 2 were provided
struct X {
       ^
15-Parentheses.cpp:3:8: note: candidate constructor (the implicit move constructor) not viable: requires 1 argument, but 2 were provided
15-Parentheses.cpp:3:8: note: candidate constructor (the implicit default constructor) not viable: requires 0 arguments, but 2 were provided
2 errors generated.

❯ clang++ --version
clang version 10.0.0-4ubuntu1~18.04.2 
Target: x86_64-pc-linux-gnu
Thread model: posix
InstalledDir: /usr/bin

❯ g++ 15-Parentheses.cpp -o 15-Parentheses.out -std=c++20
 */