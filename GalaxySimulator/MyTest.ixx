export module MyTest;

//import std.core;

export class MyTest {
public:
    int test() {
//        std::cout << "MyTest::test()" << std::endl;
        return m_test;
    }

    int m_test = 0;
};