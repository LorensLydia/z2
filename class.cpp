class A {
public:
static A* getinstance() {std::cout<< "get A" << std::endl;
if (instance) return instance;
return new A;
}
private:
A() {std::cout << "construct A<< std::endl;}
static A* instance;
    };
A* A::instance = nullptr;
