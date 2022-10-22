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


int main() {
    char *s = "Hello Qasem";
    reverseString(s);
    cout << "\n*******************************" << endl;

    normalPrint(s);
    return 0;
}
