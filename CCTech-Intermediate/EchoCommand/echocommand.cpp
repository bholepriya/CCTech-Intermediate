#include <iostream>
#include<cassert>
#include "Echo.h"
using namespace std;

int main(void) {
    assert(echoCommand("")=="\n");
    assert(echoCommand("Foo")=="\nFoo");
    assert(echoCommand("Foo command")=="\nFoo command");
    assert(echoCommand("Foo")=="\nFoo command");
    return EXIT_SUCCESS;
}  