#include <iostream>
using namespace std;

long long fibo[65][2][2];
int bin[65];
long long val[2][2][2];

int makeFibo(int cnt) {

}

int makeVal(int cnt) {
    
}

int main() {
    long long n; cin >> n;
    long long m = n;
    int cnt = 0;

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