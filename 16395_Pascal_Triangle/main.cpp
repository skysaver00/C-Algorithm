#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k, n; cin >> k >> n;
    k -= 1, n -= 1;

    long long ans = 1;
    int dvd = 2;
    for(int i = k; i >= k - n; k--) {
        ans *= i;
        cout << ans << " " << dvd << "\n";
        if(i == k && i % 2 == 1) continue;
        else {
            ans /= dvd;
            dvd++;
        }
    }

    cout << ans << "\n";
    return 0;
}
