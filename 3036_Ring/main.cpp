#include <stdio.h>
int arr[101];
int ans[101][2];

int min(int a, int b) {
    int ans = a < b ? a : b;
    return ans;
}

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 1; i < t; i++) {
        int gcd = 1;
        for(int j = 2; j <= min(arr[0], arr[i]); j++) {
            if(arr[0] % j == 0 && arr[i] % j == 0) gcd = j;
        }

        ans[i][0] = arr[0] / gcd;
        ans[i][1] = arr[i] / gcd;
    }

    for(int i = 1; i < t; i++) {
        printf("%d/%d\n", ans[i][0], ans[i][1]);
    }

    return 0;
}