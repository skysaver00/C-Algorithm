#include <iostream>
int arr[1001];

int main() {
    int n;
    scanf("%d", &n);

    arr[0] = 1, arr[1] = 3;
    for(int i = 2; i < n; i++) {
        arr[i] = (arr[i - 1] + 2 * arr[i - 2]) % 10007;
    }

    printf("%d\n", arr[n - 1]);
}
