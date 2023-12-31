#include <iostream>

class X
{
public:
	X() : X(0, 0.) { throw 1; }
	X(int a) : X(a, 0.) {}
	X(double b) : X(0, b) {}
	X(int a, double b) : a_(a), b_(b) { CommonInit(); }
	~X() { std::cout << "~X()" << std::endl; }
private:
	void CommonInit() {}
	int a_;
	double b_;
};

int main()
{
	try {
		X x;
	}
	catch (...) {
	}
}

/* 
cd src/12.delegateConstructor 
clang++ 12-9.cpp -o 12-9.out -std=c++11
./12-9.out           
~X()
 */
