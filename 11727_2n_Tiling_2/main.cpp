#include <iostream>
using namespace std;
int arr[1001];

int main() {
    int t;
    cin >> t;

    arr[1] = 1;
    arr[2] = 3;

    for(int i = 3; i <= t; i++) {
        arr[i] = arr[i - 2] * 2 + arr[i - 1];
        arr[i] %= 10007;
    }
    cout << arr[t];

    return 0;
}