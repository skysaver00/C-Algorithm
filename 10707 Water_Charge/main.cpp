#include <stdio.h>
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int main() {
    int A, B, C, D, P;
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &P);

    int X = A * P;
    int Y = B + MAX(0, P - C) * D;

    printf("%d\n", MIN(X, Y));

    return 0;
}