#include <stdio.h>

int main() {
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    if(A + D < B + C) printf("%d\n", A + D);
    else printf("%d\n", B + C);

    return 0;
}