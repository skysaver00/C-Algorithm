#include <cstdio>
#include <numeric>
using namespace std;

long long fibo[65][2][2];
int cnt[65];
long long val[2][2][2];

void init() {
    fibo[0][0][0] = fibo[0][0][1] = fibo[0][1][0] = 1;
    val[0][0][0] = val[0][1][1] = 1;
}

void makeFibo(int count) {
    for(int i = 1; i <= count; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                for(int l = 0; l < 2; l++) {
                    fibo[i][j][k] += fibo[i - 1][j][l] * fibo[i - 1][l][k];
                }
                fibo[i][j][k] %= 1000000007;
            }
        }
    }
}

void makeVal(int count) {
    for(int i = 0; i <= count; i++) {
        if(cnt[i] == 1) {
            for(int j = 0; j < 2; j++) {
                for(int k = 0; k < 2; k++) {
                    for(int l = 0; l < 2; l++) {
                        val[1][j][k] += val[0][j][l] * fibo[0][l][k];
                    }
                    val[1][j][k] %= 1000000007;
                }
            }
        } else continue;
        for(int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%lld ", val[1][j][k]);
            }printf("\n");
        }

        for(int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                val[0][j][k] = val[1][j][k];
                val[1][j][k] = 0;
            }
        }
    }
}

int main() {
    init();
    long long n, m; scanf("%lld %lld", &n, &m);
    //gcd(f(n), f(m)) == f(gcd(n, m))
    long long nm = gcd(n, m);

    long long bin = nm;
    int count = 0;
    while(bin != 0) {
        if(bin % 2 == 0) cnt[count] = 0;
        else cnt[count] = 1;
        bin /= 2;
        count++;
    }

    makeFibo(count);
    makeVal(count);
    printf("%lld\n", val[0][0][1]);
    return 0;
}