#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int t;
    double dollar;

    cin >> t;
    cout.precision(2);
    for(int i = 0; i < t; i++) {
        cin >> dollar;
        cout << "$";
        printf("%.02lf\n", dollar * 0.8);
    }
}