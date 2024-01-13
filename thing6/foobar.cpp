#include <iostream>
#include <string>
#include "bar.h"
#include "foo.h"

int main() {
    Foo foo = Foo();
    Bar bar = Bar();

    std::cout << foo.getFoo() << " " << bar.getBar() << std::endl;

    return 0;
}