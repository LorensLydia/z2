#ifndef CLASS_H
#define CLASS_H

class A {
public:
    static A* getInstance();

private:
    A();
    static A* instance;
};

#endif // CLASS_H
