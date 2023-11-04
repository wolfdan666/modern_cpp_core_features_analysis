#include <iostream>

class Base {
public:
  virtual void f()
  {
      std::cout << "Base::f()" << std::endl;
  };
};
class Derived : public Base {
public:
  virtual void f() override
  {
      std::cout << "Derived::f()" << std::endl;
  };
};

int main() {
    Base* d = new Derived();
    auto b = *d;
    b.f();
    auto &c = *d;
    c.f();
    return 0;
}

/* 

❯ ./auto_base_derived.out
Base::f()
Derived::f()
 */