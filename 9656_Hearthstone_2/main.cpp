#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    if(N % 2 == 1) {
        printf("CY\n");
    } else {
        printf("SK\n");
    }

    return 0;
}