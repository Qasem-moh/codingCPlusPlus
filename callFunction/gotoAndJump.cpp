//
// Created by qasem on 21/10/22.
//
#include "iostream"
using namespace std;
void printNumbers()
{
    int n = 1;
    label:
    cout << n << " ";
    n++;
    if (n <= 10)
        goto label;
    return;
}