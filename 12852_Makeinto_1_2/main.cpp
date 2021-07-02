#include <iostream>
using namespace std;

int val[1000001];
int track[1000001];

int MIN(int i, int j) {
    return i < j ? i : j;
}

void solve(int n) {
    for(int i = n; i >= 1; i--) {
        if(i * 3 <= n) {
            val[i] = MIN(val[i * 3], val[i]) + 1;
            if(val[i * 3] + 1 == val[i]) track[i] = i * 3;
        }

        if(i * 2 <= n) {
            val[i] = MIN(val[i * 2], val[i]) + 1;
            if(val[i * 2] + 1 == val[i]) track[i] = i * 2;
        }

        val[i] = MIN(val[i + 1], val[i]) + 1;
        if(val[i + 1] + 1 == val[i]) track[i] = i + 1;
    }
}

int main() {
    int n; cin >> n;
    for(int i = 0; i <= n; i++) val[i] = 999999999;
    solve(n);

    for(int i = 1; i <= 10; i++) {
        cout << i << val[i] << track[i] << "\n";
    }
}