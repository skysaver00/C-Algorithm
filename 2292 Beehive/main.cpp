#include <stdio.h>

int main() {

    int N;
    scanf("%d", &N);

    if(N == 1) {
        printf("1\n"); return 0;
    }

    for(int i = 1; i <= 18298; i++) {
        if(3 * (i - 1) * i + 1 < N && 3 * i * (i + 1) + 1 >= N) {
            printf("%d\n", i + 1);
            return 0;
        }
    }
}