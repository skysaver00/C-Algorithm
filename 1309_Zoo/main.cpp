#include <iostream>
using namespace std;
int zoo[100001][3];

int main() {
    int n; cin >> n;

    zoo[1][2] = zoo[1][1] = zoo[1][0] = 1;
    for(int i = 2; i <= n; i++) {
        zoo[i][2] += (zoo[i - 1][1] + zoo[i - 1][0]) % 9901;
        zoo[i][1] += (zoo[i - 1][2] + zoo[i - 1][0]) % 9901;
        zoo[i][0] += (zoo[i - 1][2] + zoo[i - 1][1] + zoo[i - 1][0]) % 9901;
    }

    int ans = (zoo[n][0] + zoo[n][1] + zoo[n][2]) % 9901;
    cout << ans << "\n";
    return 0;
}
