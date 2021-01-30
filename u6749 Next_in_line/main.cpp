#include <stdio.h>

int main() {
    int y, m;
    scanf("%d %d", &y, &m);

    printf("%d\n", m + (m - y));

    return 0;
}