#include <stdio.h>

short arr[105];

int main() {

    int N;
    scanf("%d", &N);

    for(int i = 0 ; i < N; i++) {
        scanf("%hd", &arr[i]);
    }

    int count = 0;
    for(int i = N - 1; i > 0; i--) {
        while(arr[i - 1] >= arr[i]) {
            arr[i - 1]--;
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}