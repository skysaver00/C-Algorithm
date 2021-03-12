#include <stdio.h>

int main() {
    int N, B;
    scanf("%d %d", &N, &B);

    while(N) {
        printf("%d\n", N % 36);
        N /= 36;
    }

    return 0;
}