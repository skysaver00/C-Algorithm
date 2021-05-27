#include <iostream>
#include <algorithm>
using namespace std;

int coin[101];
int money[10001];

bool val[100001];

int min(int i, int j) {
    return i < j ? i : j;
}

int main() {
    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;
        val[num] = 1;
    }

    int now = 0;
    for(int i = 0; i <= 100000; i++) {
        if(val[i]) {
            coin[now] = i;
            now++;
        }
    }

    for(int i = 0; i <= 10000; i++) money[i] = 1000000;

    for(int i = now - 1; i >= 0; i--) {
        if(coin[i] <= 10000) money[coin[i]] = 1;
        else continue;
        for(int j = coin[i] + 1; j <= k; j++) {
            if(money[j - coin[i]] != 1000000) money[j] = min(money[j - coin[i]] + 1, money[j]);
        }
    }

    if(money[k] != 1000000) cout << money[k] << endl;
    else cout << -1 << endl;

    return 0;
}