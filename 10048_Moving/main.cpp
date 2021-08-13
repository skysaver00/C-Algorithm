#include <iostream>
using namespace std;
int candy[1001][1001];
int sum[1001][1001];

int max(int i, int j) {
    return i > j ? i : j;
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cin >> candy[i][j];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            sum[i - j][j] =
        }
    }
}