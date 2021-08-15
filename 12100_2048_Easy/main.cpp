#include <stdio.h>
int real[21][21];
int sim[21][21][1025];

int left(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            bool ck = false;
            if(real[i][j] == 0) {
                int k = j + 1;
                while(k <= size - 1) {
                    if(real[i][k] != 0) {
                        ck = true;
                        break;
                    }
                    k++;
                }

                if(ck) {
                    real[i][j] = real[i][k];
                    real[i][k] = 0;
                }
            }
        }
    }

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

int right(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = size - 1; j > 0; j--) {
            bool ck = false;
            if(real[i][j] == 0) {
                int k = j - 1;
                while(k >= 0) {
                    if(real[i][k] != 0) {
                        ck = true;
                        break;
                    }
                    k--;
                }

                if(ck) {
                    real[i][j] = real[i][k];
                    real[i][k] = 0;
                }
            }
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = size - 1; j > 0; j--) {
            if(real[i][j] == real[i][j - 1]) {
                real[i][j] *= 2;
                for(int k = j - 2; k >= 0; k--) {
                    real[i][k + 1] = real[i][k];
                }
                real[i][0] = 0;
            }

            for(int k = 0; k < size; k++) printf("%d ", real[i][k]);
            printf("---------------------------------\n");
        }
    }
}

int up(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            bool ck = false;
            if(real[j][i] == 0) {
                int k = j + 1;
                while(k <= size - 1) {
                    if(real[k][i] != 0) {
                        ck = true;
                        break;
                    }
                    k++;
                }

                if(ck) {
                    real[j][i] = real[k][i];
                    real[k][i] = 0;
                }
            }
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", real[i][j]);
        }printf("\n");
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            if(real[j][i] == real[j + 1][i]) {
                real[j][i] *= 2;
                for(int k = j + 2; k <= size - 1; k++) {
                    real[k - 1][i] = real[k][i];
                }
                real[size - 1][i] = 0;
            }
        }
    }
}

int down(int size) {
    
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

    up(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", real[i][j]);
        }printf("\n");
    }

    return 0;
}