#include <iostream>

using namespace std;

void CheckEvenOrOdd(int num) {

    if (num % 2 == 0)
        goto even;
    else
        goto odd;

    even:
    cout << num << " is even";
    return;
    odd:
    cout << num << " is odd";
}

void printNumber(int n, int c) {
    label:
    cout << n << " ";
    n++;
    if (n <= c) {
        goto label;
    }
}

int main() {
    int a,b;
    cout<< " Enter point start and enter point stop, 5 ,15: ";
    cin>>a>>b;
    printNumber(a,b);
//    int num, counter;
//    cout << "Enter counter: \n";
//    cin >> counter;
//    if (counter>0) {
//
//        for (int i = 1; i <= counter; ++i) {
//            cout << "\nEnter Number "<<i<<" to check even or odd \n";
//            cin >> num;
//            cout << "Checking now...." << endl;
//            CheckEvenOrOdd(num);
//        }
//
//    }



//    float num, average, sum = 0.0;
//    int i, n;
//
//    cout << "Maximum number of inputs: ";
//    cin >> n;
//
//    for(i = 1; i <= n; ++i)
//    {
//        cout << "Enter n" << i << ": ";
//        cin >> num;
//
//        if(num < 0.0)
//        {
//            // Control of the program move to jump:
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
