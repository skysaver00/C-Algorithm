#include <stdio.h>
int apartment[15][15];

void build() {
    for(int i = 0; i <= 14; i++) {
        apartment[0][i] = i;
    }

    for(int i = 1; i <= 14; i++) {
        for(int j = 1; j <= 14; j++) {
            for(int k = 1; k <= j; k++) {
                apartment[i][j] += apartment[i - 1][k];
            }
        }
    }
}

int main() {

    build();

    int T;
    scanf("%d", &T);

    int k, n;
    for(int i = 0; i < T; i++) {
        scanf("%d\n%d", &k, &n);

        printf("%d\n", apartment[k][n]);
    }

    return 0;
}