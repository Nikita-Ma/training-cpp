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
    void funcT();
};

void TestClass::funcT() {
    std::cout << "test" << std::endl;
}

int main() {

//    std::string q = "qweqwe";
//    int globalVar = 1;
//
//    for (int i = 0; i < 10; ++i) {
//        int localVar = 2;
//        std::cout << q << std::endl;
//    }
//    firstFunc(2);
    TestClass testClass;
    testClass.funcT();
}


