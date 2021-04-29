#include <stdio.h>
#include <math.h>
int arr[50001];

int min(int j, int k) {
    return (j < k) ? j : k;
}

int main() {
    int n;
    scanf("%d", &n);

    int i = sqrt(n);
    for(int k = 1; k <= n; i++) {
        arr[k] = 9999;
    }

    for(int k = 1; k <= i; k++) {
        arr[k * k] = 1;
    }

    for(int j = 1; j <= n; j++) {
        if(int k = 1; k <= sqrt(j); k++) {
            
        }
    }

    return 0;
}