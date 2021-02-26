#include <stdio.h>
#include <math.h>

int main() {
    int R;
    int B;
    scanf("%d %d", &R, &B);

    int a_b = (R + 4)/2;
    int ab = R + B;

    int a_b2 = (a_b * a_b) - (4 * ab);
    a_b2 = (int)(sqrt(a_b2));

    int real_a = (a_b + a_b2) / 2;
    int real_b = (a_b - a_b2) / 2;

    printf("%d %d\n", real_a, real_b);
}