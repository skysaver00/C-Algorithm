#include <iostream>
using namespace std;

int binA[66];
int binB[66];
long long val[66];

long long makeBin(long long k) {
    long long ans = k & 1;
    long long bin = 1;
    for(int i = 63; i > 0; i--) {
        if(k & (bin << i)) {
            ans += val[i - 1] + (k - (bin << i) + 1);
            k -= (bin << i);
        }
    }

    return ans;
}

void makeVal() {
    val[0] = 1;
    long long pow = 1;
    for(int i = 1; i < 66; i++) {
        pow = pow << 1;
        val[i] = val[i - 1] * 2 + pow;
    }
}

int main() {
    makeVal();
    long long A, B; cin >> A >> B;

    for(int i = 0; i < 64; i++) {
        cout << val[i] << "\n";
    }

    long long solve1 = makeBin(A - 1);
    long long solve2 = makeBin(B);

    cout << solve2 - solve1 << "\n";
    return 0;
}