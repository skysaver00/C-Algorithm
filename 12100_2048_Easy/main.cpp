#include <stdio.h>
int real[21][21];
int sim[21][21][1025];

int left(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            if(real[i][j] == real[i][j + 1]) {
                real[i][j] *= 2;
                for(int k = j + 2; k <= size - 1; k++) {
                    real[i][k - 1] = real[i][k];
                }
                real[i][size - 1] = 0;
            }

            for(int k = 0; k < size; k++) printf("%d ", real[i][k]);
            printf("---------------------------------\n");
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &real[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", real[i][j]);
        }printf("\n");
    }

    left(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", real[i][j]);
        }printf("\n");
    }

    return 0;
}