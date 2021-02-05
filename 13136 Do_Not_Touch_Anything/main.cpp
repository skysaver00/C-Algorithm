#include <stdio.h>
#include <math.h>

int main() {
    int R, C, N;
    scanf("%d %d %d", &R, &C, &N);

    double x = ceil(R / N);
    double y = ceil(C / N);

    printf("%lf     ", R / N);
    printf("%lf %lf", x, y);
    printf("%d\n", int(x * y));

    return 0;
}