#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k, n; cin >> k >> n;
    k -= 1, n -= 1;

    long long ans = 1;
    for(int i = k; i > k - n; k--) {
        k *= i;
        
    }

    return 0;
}
