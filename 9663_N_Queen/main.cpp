#include <iostream>
using namespace std;

int chess[16];
int ans = 0;
bool check(int cnt) {
    for(int i = 0; i < cnt; i++) if(chess[cnt] == chess[i] || cnt - i == abs(chess[cnt] - chess[i])) return false;
    return true;
}

void nqueen(int cnt, int n) {
    if(cnt == n) {
        ans++;
        return;
    }

    for(int i = 0; i < n; i++) {
        chess[cnt] = i;
        if(check(cnt)) nqueen(cnt + 1, n);
    }
}

int main() {
    int n; cin >> n;
    nqueen(0, n);

    cout << ans << "\n";

    return 0;
}