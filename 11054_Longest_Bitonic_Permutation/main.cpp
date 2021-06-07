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

    for(int i = 0; i <= n; i++) {
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
    for(int i = n; i >= 1; i--) {
        if(ma != max(up[i], ma) || ma == up[i]) {
            ma = max(up[i], ma);
            loc = i;
        }
    }
    for(int i = 1; i <= n; i++) {
        printf("%d ", up[i]);
    }printf("\n");
    printf("%d\n", loc);

    down[loc] = 0;
    for(int i = 0; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            if(arr[i] < arr[j]) {
                if(down[i] >= down[j]) {
                    down[i] = down[j] + 1;
                }
            }
        }
    }

    for(int i = 1; i <= n; i++) {
        printf("%d ", down[i]);
    }printf("\n");
    int asc = 0;
    int desc = 0;
    for(int i = 1; i <= n; i++) {
        if(asc < up[i]) asc = up[i];
        if(desc < down[i]) desc = down[i];
    }

    printf("%d %d\n", asc, desc);

    return 0;
}