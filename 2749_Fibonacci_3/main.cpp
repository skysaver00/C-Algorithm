#include <iostream>
using namespace std;
long long fibo[80][2][2];
int count[80];
long long val[2][2][2];

void makeFibo(int cnt) {
    for(int i = 1; i <= cnt; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                for(int l = 0; l < 2; l++) {
                    fibo[i][j][k] += fibo[i - 1][j][l] * fibo[i - 1][l][k];
                }
                fibo[i][j][k] %= 1000000;
            }
        }
    }
}

void makeVal(int cnt) {
    for(int i = 0; i < cnt; i++) {
        if(count[i] == 1) {
            for(int j = 0; j < 2; j++) {
                for(int k = 0; k < 2; k++) {
                    for(int l = 0; l < 2; l++) {
                        val[1][j][k] += val[0][j][l] * fibo[i][l][k];
                    }
                    val[1][j][k] %= 1000000;
                }
            }
        }
        else continue;
        for(int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                val[0][j][k] = val[1][j][k];
                val[1][j][k] = 0;
            }
        }
    }
}

int main() {
    long long b; cin >> b;
    fibo[0][0][0] = 1; //F2 = F1 + F0
    fibo[0][0][1] = 1; //F1
    fibo[0][1][0] = 1; //F1
    fibo[0][1][1] = 0; //F0

    val[0][0][0] = val[0][1][1] = 1; //단위행렬 만들기

    long long num = b;
    int cnt = 0;
    while(num!= 0) {
        cnt++;
        num /= 2;
    }

    for(int i = 0; i < cnt; i++) {
        if(b % 2 == 1) count[i] = 1;
        else count[i] = 0;
        b /= 2;
    }

    makeFibo(cnt);
    makeVal(cnt);
    cout << val[0][0][1] << "\n";
    return 0;
}