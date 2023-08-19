// Global module fragment where #includes
// can happen
module;
//#include <iostream>

// first thing after the Global module
// fragment must be a module command
export module foo;

struct MyStruct {
    bool mybool;
};

export class foo {
public:
    foo();
    ~foo();
    void helloworld();
};
