#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 0 ; i < T; i++) {
        short a, b;
        scanf("%hu %hu", &a, &b);
        printf("%hu\n", a + b);
    }

    return 0;
}