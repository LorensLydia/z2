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
