#include <stdio.h>

int main() {
    int K, N, M;
    scanf("%d %d %d", &K, &N, &M);

    int sum = K * N - M;
    if(sum >= 0) printf("%d\n", sum);
    else printf("0\n");

    return 0;
}