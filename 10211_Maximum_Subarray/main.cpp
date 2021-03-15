#include <stdio.h>
int arr[1001];

int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        for(int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
            if(j != 0) arr[j] = arr[j] + arr[j - 1];
            else {}
        }

        int min = 0;
        int max = arr[0];

        int flag = 0;
        for(int i = 0; i < n; i++) {
            if(max < arr[i]) {
                flag = i;
                max = arr[i];
            }
        }

        for(int i = 0; i < n; i++) {
            if(min > arr[i]) {
                if(i < flag) min = arr[i];
            } else {}
        }

        printf("%d\n", max - min);
    }
    return 0;
}