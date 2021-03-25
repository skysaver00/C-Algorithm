#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int arr[51];
    while(t--) {
        int n;
        scanf("%d", &n);

        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int max = -99999999;
        int min = 99999999;
        for(int i = 1; i < n; i++) {
            if(max < arr[i] - arr[i - 1]) max = arr[i] - arr[i - 1];
            if(min > arr[i] - arr[i - 1]) min = arr[i] - arr[i - 1];
        }

        printf("%d\n", max, min);
    }
}