#include <iostream>
using namespace std;
int arr[1000001];

int main() {
    int n;
    cin >> n;

    arr[0] = 1, arr[1] = 2;

    for(int i = 2; i < n; i++) {
        arr[i] = arr[i - 2] + arr[i - 1];
        arr[i] %= 15746;
    }

    printf("%d\n", arr[n - 1]);

    return 0;
}