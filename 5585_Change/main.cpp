#include <bits/stdc++.h>
using namespace std;

int main() {
    int money;
    cin >> money;

    money = 1000 - money;
    int coin[6] = {500, 100, 50, 10, 5, 1};

    int cnt = 0;
    int v = 0;
    while(money) {
        if(money >= coin[v]) {
            cnt++;
            money -= coin[v];
        } else {
            v++;
        }
    }

    cout << cnt << "\n";
    return 0;
}