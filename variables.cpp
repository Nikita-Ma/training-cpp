//
// Created by Nik on 23.06.2023.
//
#include <iostream>

void secondFunc(int qwe, int oqooq) {
    qwe = 1;
    std::cout << qwe << std::endl;
}

void firstFunc(int a) {
    int exampleF = 1;
    secondFunc(2, exampleF);
}

class TestClass {
    int exampleVar;
public:
    int i = 1;

    int funcT();
};

int TestClass::funcT() {
    return 41;
}


class ExtendsClass : public TestClass {
public:
    void secondFunc() {
        std::cout << funcT() << std::endl;
    }
};

int main() {

//    std::string q = "qweqwe";
//    int globalVar = 1;
//
//    for (int i = 0; i < 10; ++i) {
//        int localVar = 2;
//        std::cout << q << std::endl;
//    }
//    firstFunc(2);
//    TestClass testClass;
//    testClass.funcT();
        ExtendsClass extendsClass;
        extendsClass.secondFunc();
}


