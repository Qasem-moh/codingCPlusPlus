#include <iostream>

using namespace std;

//reverse string
void reverseString(char *s) {

    if (*s) {
        reverseString(s + 1);
        putchar(*s);
    }
}

//print normal
void normalPrint(char *s) {
    if (*s) {
        putchar(*s);
        normalPrint(s + 1);
    }
}

// factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1;

    return n * factorial(n - 1); //
}

// factorial
int factorial_Iter(int n) {
    int fact = 1;
    for (int i = n; i > 1; i--) {   //5*1=5 4*5=20 3*20=60 2*60=120
        fact *= i;
    }
    return fact;
}

int main() {
//    char *s = "Hello Qasem";
//    reverseString(s);
//    cout << "\n*******************************" << endl;
//    normalPrint(s);
////////////////////////////////////////////////////////////
//    cout << factorial(4);
    cout << factorial_Iter(5);

////////////////////////////////////////////////////////////
    return 0;

}
