class A {
public:
    static A* getinstance() {
        std::cout << "get A" << std::endl;
        if (instance) return instance;
        instance * new A;
        return instance;
    }
private:
    A() {std::cout << "construct A" << std::endl;}
    static A* instance;
};

A* A::instance = nullptr;
