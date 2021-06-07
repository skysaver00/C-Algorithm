#include <stdio.h>
int arr[1001];
int up[1001];
int down[1001];

int max (int i, int j) {
    return i >= j ? i : j;
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d", &arr[i]);
    }

    int flag = 0;
    up[1] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            if(arr[i] > arr[j]) {
                if(up[i] <= up[j]) {
                    up[i] = up[j] + 1;
                }
            }
        }
    }

    int ma = 0;
    int loc = 0;
    for(int i = 1; i <= n; i++) {
        printf("%d ", up[i]);
    }printf("\n");
}