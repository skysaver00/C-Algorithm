#include <stdio.h>
int real[21][21];
int map[21][21];
int move[5];

int left(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            bool ck = false;
            if(map[i][j] == 0) {
                int k = j + 1;
                while(k <= size - 1) {
                    if(map[i][k] != 0) {
                        ck = true;
                        break;
                    }
                    k++;
                }

                if(ck) {
                    map[i][j] = map[i][k];
                    map[i][k] = 0;
                }
            }
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            if(map[i][j] == map[i][j + 1]) {
                map[i][j] *= 2;
                for(int k = j + 2; k <= size - 1; k++) {
                    map[i][k - 1] = map[i][k];
                }
                map[i][size - 1] = 0;
            }

            for(int k = 0; k < size; k++) printf("%d ", map[i][k]);
            printf("---------------------------------\n");
        }
    }
}

int right(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = size - 1; j > 0; j--) {
            bool ck = false;
            if(map[i][j] == 0) {
                int k = j - 1;
                while(k >= 0) {
                    if(map[i][k] != 0) {
                        ck = true;
                        break;
                    }
                    k--;
                }

                if(ck) {
                    map[i][j] = map[i][k];
                    map[i][k] = 0;
                }
            }
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = size - 1; j > 0; j--) {
            if(map[i][j] == map[i][j - 1]) {
                map[i][j] *= 2;
                for(int k = j - 2; k >= 0; k--) {
                    map[i][k + 1] = map[i][k];
                }
                map[i][0] = 0;
            }

            for(int k = 0; k < size; k++) printf("%d ", map[i][k]);
            printf("---------------------------------\n");
        }
    }
}

int up(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            bool ck = false;
            if(map[j][i] == 0) {
                int k = j + 1;
                while(k <= size - 1) {
                    if(map[k][i] != 0) {
                        ck = true;
                        break;
                    }
                    k++;
                }

                if(ck) {
                    map[j][i] = map[k][i];
                    map[k][i] = 0;
                }
            }
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            printf("%d ", map[i][j]);
        }printf("\n");
    }

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size - 1; j++) {
            if(map[j][i] == map[j + 1][i]) {
                map[j][i] *= 2;
                for(int k = j + 2; k <= size - 1; k++) {
                    map[k - 1][i] = map[k][i];
                }
                map[size - 1][i] = 0;
            }
        }
    }
}

int down(int size) {
    for(int i = 0; i < size; i++) {
        for(int j = size - 1; j > 0; j--) {
            bool ck = false;
            if(map[j][i] == 0) {
                int k = j - 1;
                while(k >= 0) {
                    if(map[k][i] != 0) {
                        ck = true;
                        break;
                    }
                    k--;
                }

                if(ck) {
                    map[j][i] = map[k][i];
                    map[k][i] = 0;
                }
            }
        }
    }

    for(int i = 0; i < size; i++) {
        for(int j = size - 1; j > 0; j--) {
            if(map[j][i] == map[j - 1][i]) {
                map[j][i] *= 2;
                for(int k = j - 2; k >= 0; k--) {
                    map[k + 1][i] = map[k][i];
                }
                map[0][i] = 0;
            }
        }
    }
}

void start() {

}

void make_move(int)


int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &real[i][j]);
        }
    }



    /*for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", map[i][j]);
        }printf("\n");
    }

    down(n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", map[i][j]);
        }printf("\n");
    }*/

    return 0;
}