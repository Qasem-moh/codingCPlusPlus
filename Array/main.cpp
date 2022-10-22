#include <iostream>

using namespace std;

int main() {

    double numbers[] = {7, 5, 6, 12, 35, 27};
    double sum = 0;
    double count = 0;
    double average;

    cout << "The Numbers are : ";

    for (const double &n: numbers) {
        cout << n << " ";
        sum += n;
        ++count;
    }
    cout << "yhe sum is :" << sum << ", The Count is : " << count << " ,the avarege is " << sum / count << endl;

    return 0;
}
