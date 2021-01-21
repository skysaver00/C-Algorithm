#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int x = 0; int y = 0;
    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) x++;
        else y++;
    }

    printf("%d\n", (x + 1) * (y + 1));
}