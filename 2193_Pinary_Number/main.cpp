#include <iostream>
using namespace std;
int arr[91][2];

int main() {
    int n;
    cin >> n;

    arr[1][0] = 0;
    arr[1][1] = 1;

    for(int i = 2; i <= n; i++) {
        arr[i][0] = arr[i - 1][0] + arr[i - 1][1];
        arr[i][1] = arr[i - 1][0];

        printf("%d %d\n", arr[i][0], arr[i][1]);
    }

    printf("%d\n" arr[n][0] + arr[n][1]);

    return 0;
}