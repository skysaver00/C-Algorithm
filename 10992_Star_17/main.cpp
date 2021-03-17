#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int blank = n - 1;
    int blank_2 = -1;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < blank; j++) printf(" ");
        printf("*");

        for(int j = 0; j < blank_2; j++) printf(" ");
        if(i != 0) printf("*");

        blank--, blank_2 += 2;
        printf("\n");
    }

    for(int i = 0; i < 2 * n - 1; i++) printf("*");

    return 0;
}