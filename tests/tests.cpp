#include <iostream>
#include <gtest/gtest.h>

class A {
public:
    static A* getInstance() {
        std::cout << "get A" << std::endl;
        if (instance) return instance;
        return new A;
    }

private:
    A() {
        std::cout << "construct A" << std::endl;
    }

    static A* instance;
};

A* A::instance = nullptr;

TEST(AConstructorTest, ConstructorCalledOnce) {
    A* pa1 = A::getInstance();
    A* pa2 = A::getInstance();

    EXPECT_EQ(pa1, pa2); // Убедимся, что указатели на объекты совпадают
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
