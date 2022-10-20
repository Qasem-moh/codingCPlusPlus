#include "sqrt.hpp"
#include "cmath"

using namespace std;

int sqrtValue(int n) {
    return (n > 0) ? n * 5 : n * 10;
}

unsigned fact(unsigned n) {
    unsigned product{1};
    for (unsigned i = 1; i <= n; ++i) {
        product *= i;
        return product;
    }
}