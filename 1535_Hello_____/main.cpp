#include <iostream>
using namespace std;

int dp[22][103];
int happy[22];
int health[22];

int max(int i, int j) {
    return (i > j) ? i : j;
}

int main() {
    int N; cin >> N;
    for (int i = 1; i <= N; i++) cin >> health[i];
    for (int i = 1; i <= N; i++) cin >> happy[i];

    int ans = -1e9;
    for (int i = 1; i <= N; i++) {
        for (int j = 100; j >= 0; j--) {
            if (j - health[i] >= 1) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - health[i]] + happy[i]);
            else dp[i][j] = dp[i - 1][j];
            ans = max(ans, dp[i][j]);
        }
    }
    cout << ans << "\n";
}