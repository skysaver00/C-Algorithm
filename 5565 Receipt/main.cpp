#include <stdio.h>

int main() {
    int sum;
    scanf("%d", &sum);

    for(int i = 0; i < 9; i++) {
        int book;
        scanf("%d", &book);

        sum = sum - book;
    }

    printf("%d\n", sum);
}