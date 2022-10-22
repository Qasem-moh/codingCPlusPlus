#include <iostream>
#include "Recursion.cpp"

using namespace std;

void test() {
    cout << "Hello Overloading\n";
}

int test(int a) {
    cout << "This function from one parameter " << a << endl;

}

int test(int a, int b) {
    cout << "this function from two parameter " << a << " " << b << " " << endl;
}


int main() {
    int n, result;
    cout << "Enter Number of Recursion: \n";
    cin >> n;
    result = factorial(n);
    cout << "Factorial of " << n << " = " << result << endl;
    test();
    test(1);
    test(2, 3);
    std::cout << "\nHello, World!" << std::endl;
    return 0;
}
