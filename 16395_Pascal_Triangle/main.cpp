#include <iostream>
#include <vector>

using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    k -= 1, n -= 1;

    long long ans = 1;
    int dvd = 1;
    for (int i = k; i > k - n; i--) {
        ans *= i;
        ans /= dvd;
        dvd++;

    }

    cout << ans << "\n";
    return 0;
}
