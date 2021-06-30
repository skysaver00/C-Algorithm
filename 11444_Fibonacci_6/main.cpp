#include <iostream>
using namespace std;

long long fibo[65][2][2];
int bin[65];
long long val[2][2][2];

void init() {
    fibo[0][0][0] = fibo[0][0][1] = fibo[0][1][0] = 1; //fibo 행렬
    val[0][0][0] = val[0][1][1] = 1; //val 단위행렬
}

int makeFibo(int cnt) {
    for(int i = 1; i <= cnt; i++) {
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 2; k++) {
                for(int l = 0; l < 2; l++) {
                    fibo[i][j][k] += fibo[i - 1][k][l] * fibo[i - 1][]
                }
            }
        }
    }
}

int makeVal(int cnt) {

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

    cout << cnt << "\n";
    for(int i = 0; i < cnt; i++) {
        cout << bin[i] << " ";
    }cout << "\n";

    makeFibo(cnt);
    makeVal(cnt);

    return 0;
}