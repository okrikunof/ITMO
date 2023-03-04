#include <iostream>
#include <cmath>
#include <complex>
#include "procedures.h"

#define A 1
#define B 2
#define C 126.57

int main() {
    int a = A;
    int b = B;
    float c = C;
    std::complex<double> z (10.0,2.0);

    summator_by_references(a, b);
    assert(a == A + B);
    summator_by_pointers(&a, &b);
    assert(a == A + B);

    remove_integer_by_references(c);
    assert(c == round(c));
    remove_integer_by_pointers(&c);
    assert(c == round(c));

    complex_exchange_by_references(z);
    assert(z.imag() < -z.imag());
    complex_exchange_by_pointers(&z);
    assert(z.imag() < -z.imag());

    move_square_by_references (a, b);
    assert(my_square.x1 - a == 0 && my_square.y1 - b == 0);
    move_square_by_pointers (&a, &b);
    assert(my_square.x1 - a == 0 && my_square.y1 - b == 0);
    return 0;
}
