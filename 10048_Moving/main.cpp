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
            if((i - j) == 0 && j == 0) sum[i - j][j] = candy[i - j][j];

            if((i - j) == 0) sum[i - j][j] = sum[i - j][j - 1] + candy[i - j][j];
            else if(j == 0) sum[i - j][j] = sum[i - j - 1][j] + candy[i - j][j];
            else {
                sum[i - j][j] = max(sum[i - j][j - 1], max(sum[i - j - 1][j], sum[i - j - 1][j - 1])) + candy[i - j][j];
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cout << sum[i][j] << " ";
    }cout << "\n";

    return 0;
}