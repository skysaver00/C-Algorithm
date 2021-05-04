#include <stdio.h>

int main() {
    int s, t, d;
    scanf("%d %d %d", &s, &t, &d);

    int val = d / (2 * s);
    printf("%d\n", t * val);

    return 0;
}