#include <iostream>
using namespace std;

int matrix[501][2];
int dp[501][501];

int main() {
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> matrix[i][0] >> matrix[i][1];
    }
}
