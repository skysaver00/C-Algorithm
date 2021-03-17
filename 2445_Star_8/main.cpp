#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    int star = 1;
    for (int i = 0; i < t; i++) {


        for (int k = 0; k < star; k++) {
            printf("*");
        }
        for (int k = t - star; k > 0; k--) {
            printf(" ");
        }

        for (int k = t - star; k > 0; k--) {
            printf(" ");
        }
        for (int k = 0; k < star; k++) {
            printf("*");
        }

        printf("\n");
        star++;
    }

    star -= 2;
    for(int i = t; i > 1; i--) {
        for (int k = 0; k < star; k++) {
            printf("*");
        }
        for (int k = t - star; k > 0; k--) {
            printf(" ");
        }

        for (int k = t - star; k > 0; k--) {
            printf(" ");
        }
        for (int k = 0; k < star; k++) {
            printf("*");
        }
        printf("\n");
        star--;
    }

    return 0;
}