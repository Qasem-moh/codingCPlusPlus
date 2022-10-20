#include <iostream>
#include "sqrt.cpp"
#include "printMessage.cpp"
using namespace std;
int main() {
    printQ();
    cout<<"\nEnter number: ";
    int n;
    cin>>n;
    cout<<"value is :"<<sqrtValue(n);




//    float num, average, sum = 0.0;
//    int i, n;
//
//    cout << "Maximum number of inputs: ";
//    cin >> n;
//
//    for (i = 1; i <= n; ++i) {
//        cout << "Enter n" << i << ": ";
//        cin >> num;
//
//        if (num < 0.0) {
            // Control of the program move to jump:
//            goto jump;
//        }
//        sum += num;
//    }
//
//    jump:
//    average = sum / (i - 1);
//    cout << "\nAverage = " << average;
    return 0;
}
