#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int A[5]; //size of integer * 5;

    int B[5] = {2, 4, 6, 8, 10};
    int C[10] = {2, 4, 6, 8, 10, 12, 14};
    int D[10000] = {0}; //이렇게 하면 모두 0으로 채워진다.

    A[0] = 12;
    A[1] = 15;
    A[2] = 25;

    for(int x: A) {
        cout << x << endl;
    }

    cout << sizeof(A) << endl;
    cout << A[1] << endl;

    printf("%d\n", A[2]);

    cout << sizeof(B) << endl;
    cout << B[4] << endl;

    cout << C[8] << endl;

    int n;
    cin >> n;

    cout << n << endl;

    return 0;
}