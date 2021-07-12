#include <stdio.h>
long long fibo[66][2][2];
long long value_1[2][2][2];
long long value_2[2][2][2];
int bin_1[66];
int bin_2[66];

void makeFibo(int cnt) {
    for(int i = 1; i <= cnt; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                for(int l = 0; l < 2; l++) {
                    fibo[i][j][k] += fibo[i - 1][j][l] * fibo[i - 1][l][k];
                }
                fibo[i][j][k] %= 1000000000;
            }
        }
    }
}

void makeVal(int cnt) {
    for(int i = 0; i < cnt; i++) {
        if(bin_1[i] == 1) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    for (int l = 0; l < 2; l++) {
                        value_1[1][j][k] += value_1[0][j][l] * fibo[i][l][k];
                    }
                    value_1[1][j][k] %= 1000000000;
                }
            }
        }

        if(bin_2[i] == 1) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    for (int l = 0; l < 2; l++) {
                        value_2[1][j][k] += value_2[0][j][l] * fibo[i][l][k];
                    }
                    value_2[1][j][k] %= 1000000000;
                }
            }
        }

        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                value_1[0][j][k] = value_1[1][j][k];
                value_2[0][j][k] = value_2[1][j][k];
                value_1[1][j][k] = value_2[1][j][k] = 0;
            }
        }
    }
}

int main() {
    long long a, b; scanf("%lld %lld", &a, &b);
    a += 1;
    b += 2;

    long long len = b;
    int cnt = 0;
    while(len != 0) {
        len /= 2;
        cnt++;
    }

    for(int i = 0; i < cnt; i++) {
        if(b % 2 == 1) bin_2[i] = 1;
        if(a % 2 == 1) bin_1[i] = 1;
        b /= 2;
        a /= 2;
    }

    fibo[0][0][0] = fibo[0][1][0] = fibo[0][0][1] = 1;
    value_1[0][0][0] = value_1[1][1][0] = value_2[0][0][0] = value_2[1][1][0] = 1;
    makeFibo(cnt);
    makeVal(cnt);

    for(int i = 1; i <= cnt; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                printf("%lld ", fibo[i][j][k]);
            }printf("\n");
        }printf("\n");
    }

    printf("%lld\n", value_2[0][1][0] - value_1[0][1][0]);
    return 0;
}