#include <stdio.h>

int main() {
    int N;
    int F;
    scanf("%d %d", &N, &F);

    int N2 = N - (N % 100);

    int remain = N2 % F;
    if(remain != 0) N2 += (F - remain);
    N2 %= 100;

    printf("%02d\n", N2);
}