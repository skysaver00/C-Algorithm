#include <stdio.h>

int main() {
    int X;
    scanf("%d", &X);

    int count = 0;

    int i = 1;
    while(count < X) {
        count += i;
        i++;
    }

    printf("%d\n", i);
}