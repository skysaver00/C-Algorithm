#include <iostream>
using namespace std;
int candy[1001][1001];
int sum[1001][1001];

int max(int i, int j) {
    return i > j ? i : j;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cin >> candy[i][j];
    }

    for(int i = 0; i < 2 * n; i++) {
        for(int j = 0; j <= i; j++) {
            if(i - j >= n || j >= m) continue;
            if((i - j) == 0 && j == 0) sum[i - j][j] = candy[i - j][j];

            if((i - j) == 0) sum[i - j][j] = sum[i - j][j - 1] + candy[i - j][j];
            else if(j == 0) sum[i - j][j] = sum[i - j - 1][j] + candy[i - j][j];
            else sum[i - j][j] = max(sum[i - j][j - 1], max(sum[i - j - 1][j], sum[i - j - 1][j - 1])) + candy[i - j][j];
        }
    }

    cout << sum[n - 1][m - 1] << "\n";
    return 0;
}