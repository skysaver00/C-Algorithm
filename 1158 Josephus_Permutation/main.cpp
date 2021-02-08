#include <stdio.h>

int arr[5001];
int arr2[5001];
int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for(int i = 0; i < N; i++) {
        arr[i] = i + 1;
    }

    int perm = -1;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < K; j++) {
            printf("j: %d, perm: %d\n", j, perm);
            if(perm == N) perm = 0;

            if(arr[perm] == 0) {
                if(j != 0) j--;
            }
            perm++;
        }

        printf("%d\n", arr[perm]);
        arr[perm] = 0;
    }
}
