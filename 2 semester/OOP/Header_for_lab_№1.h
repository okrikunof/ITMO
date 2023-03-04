#include <iostream>
#include <cmath>
#include <complex>

#ifndef _CPP_PROCEDURES_H
#define _CPP_PROCEDURES_H

void summator_by_references (int &a, int &b) {
    a += b;
}
void summator_by_pointers (int *a, int *b) {
    *a += *b;
}


void remove_integer_by_references (float &c) {
    c = (int)c;
}
void remove_integer_by_pointers (float *c) {
    *c = (int)*c;
}


void complex_exchange_by_references (std::complex <double> &z) {
    z = std::conj(z);
}
void complex_exchange_by_pointers (std::complex <double> *z) {
    *z = std::conj(*z);
}


struct square {
    float x1, x2, x3, x4, y1, y2, y3, y4;
};
square my_square;
void move_square_by_references (int &a, int &y) {
    my_square.x1 += a;
    my_square.x2 += a;
    my_square.x3 += a;
    my_square.x4 += a;
    my_square.y1 += y;
    my_square.y2 += y;
    my_square.y3 += y;
    my_square.y4 += y;
}
void move_square_by_pointers (int *a, int *y) {
    my_square.x1 += *a;
    my_square.x2 += *a;
    my_square.x3 += *a;
    my_square.x3 += *a;
    my_square.y1 += *y;
    my_square.y2 += *y;
    my_square.y3 += *y;
    my_square.y4 += *y;
}
#endif //_CPP_PROCEDURES_H
