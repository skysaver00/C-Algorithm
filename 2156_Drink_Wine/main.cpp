#include <stdio.h>
int wine[10001];
int drink[10001];

int max(int i, int j) {
    return (i > j) ? i : j;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &wine[i]);
    }

    drink[0] = wine[0];
    drink[1] = wine[0] + wine[1];

    drink[2] = max(drink[0] + wine[2], 0 + wine[1] + wine[2]);

    for(int i = 3; i < n; i++) {
        drink[i] = max(drink[i - 2] + wine[i], drink[i - 3] + wine[i - 1] + wine[i - 2]);
        drink[i] = max(drink[i - 1], drink[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%d\n", drink[i]);
    }

    return 0;
}