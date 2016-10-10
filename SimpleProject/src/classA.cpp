#include "classA.h"

A::A(const int a) : val(a) {}

int A::value() const {
    return val;
}

void A::set_value(int v) {
    val = v;
}
