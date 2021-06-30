#include <iostream>
using namespace std;

long long fibo[65][2][2];
int bin[65];
long long val[2][2][2];

void init() {
    fibo[0][0][0] = fibo[0][0][1] = fibo[0][1][0] = 1; //fibo 행렬
    val[0][0][0] = val[0][1][1] = 1; //val 단위행렬
}

void makeFibo(int cnt) {
    for(int i = 1; i <= cnt; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                for(int l = 0; l < 2; l++)
                    fibo[i][j][k] += fibo[i - 1][j][l] * fibo[i - 1][l][k];
                fibo[i][j][k] %= 1000000007;
            }
        }
    }
}

void makeVal(int cnt) {
    for(int i = 0; i <= cnt; i++) {
        if(bin[i] != 0) {
            for(int j = 0; j < 2; j++) {
                for(int k = 0; k < 2; k++) {
                    for(int l = 0; l < 2; l++)
                        val[1][j][k] += val[0][j][l] * fibo[i][l][k];
                    val[1][j][k] %= 1000000007;
                }
            }
        }
        else continue;
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                val[0][j][k] = val[1][j][k];
                val[1][j][k] = 0;
            }
        }
    }
}

int main() {
    long long n; cin >> n;
    long long m = n;
    int cnt = 0;

    init();

    while(m != 0) {
        if(m % 2 == 0);
        else bin[cnt] = 1;
        cnt++;
        m /= 2;
    }

    makeFibo(cnt);
    makeVal(cnt);
    cout << val[0][0][1] << "\n";
    return 0;
}