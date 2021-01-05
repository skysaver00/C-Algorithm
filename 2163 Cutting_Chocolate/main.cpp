#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    n--, m--;

    if (n > m) printf("%d\n", m + (n * (m + 1)));
    else printf("%d\n", n + (m * (n + 1)));


    return 0;
}