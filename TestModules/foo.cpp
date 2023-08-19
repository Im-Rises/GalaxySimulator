module foo;

#include <iostream>

foo::foo() = default;

foo::~foo() = default;

void foo::helloworld() {
    MyStruct sdqdsqdq;
    sdqdsqdq.mybool = true;
    std::cout << "hello world\n"
              << "value: "
              << sdqdsqdq.mybool << std::endl;
}
