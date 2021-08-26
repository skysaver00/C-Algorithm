#include <iostream>
using namespace std;

int matrix[501][2];
int dp[501][501];

int solve(int s, int e) {
    int val = 0;
    if(s == e) return 0;
    if(dp[s][e]) return dp[s][e];
    if(s == e - 1) {
        val = matrix[s][0] * matrix[s][1] * matrix[e][1];
        dp[s][e] = val;
        return dp[s][e];
    }

    for(int i = s; i < e; i++) {
        val = solve(s, i) + solve(i + 1, e) + matrix[s][0] * matrix[i][1] * matrix[e][1];
        if(!dp[s][e] || val < dp[s][e]) dp[s][e] = val;
    }
    return dp[s][e];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> matrix[i][0] >> matrix[i][1];
    }

    int ans = solve(0, n - 1);
    cout << ans << "\n";
    return 0;
}
