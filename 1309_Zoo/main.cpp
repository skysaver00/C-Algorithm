#include <iostream>
using namespace std;
int zoo[100001][2];

int main() {
    int n; cin >> n;

    zoo[1][1] = 1;
    for(int i = 2; i <= n; i++) {
        zoo[i][1] += zoo[i - 1][1] + zoo[i - 1][0];
        zoo[i][0] += zoo[i - 1][1] * 2 + zoo[i - 1][0];
    }

    return 0;
}
