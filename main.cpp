#include <iostream>

class A {
pudlic:
static A* getInstance() {std::cout<< "get A" << std::endl;
if (instance) return instance;
return new A;
}
private:
A() {std::cout << "construct A<< std::endl;}
A* instance;
    };
int main () {
  A* instance;
};
int main () {
  A* pa1 = A.getInstance();
  A* pa2 = A.getinstance();
}
