#include <stdio.h>

int main() {
    int Ai;
    int sum = 0;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &Ai);
        sum += Ai;
    }

    printf("%d\n", sum);
    return 0;
}