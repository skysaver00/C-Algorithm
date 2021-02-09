#include <stdio.h>

int main() {
    int sum;
    scanf("%d", &sum);

    int A, B, C;
    A = B = C = 0;
    while (sum >= 300) {
        sum -= 300;
        A++;
    }
    while (sum >= 60) {
        sum -= 60;
        B++;
    }
    while (sum >= 10) {
        sum -= 10;
        C++;
    }

    if(sum != 0) {
        printf("-1\n");
        return 0;
    }
    else {
        printf("%d %d %d\n", A, B, C);
        return 0;
    }
    return 0;
}