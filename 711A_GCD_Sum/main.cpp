#include <iostream>
#include <cmath>
using namespace std;

int gcd(long long big, long long small) {
    int greatest = 1;
    if(small <= 3) {
        if(big % small == 0) greatest *= small;
        return greatest;
    }

    for(int i = 2; i <= small; i++) {
        if(big % i == 0 && small % i == 0) {
            greatest *= small;
            ddddds
            return greatest;
        }
    }
    return greatest;
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        long long n;
        scanf("%lld", &n);

        while(1) {
            long long mirN = n;
            long long sum = 0;
            while(mirN) {
                sum += mirN % 10;
                mirN /= 10;
            }

            if(sum == 1) {
                n++;
                continue;
            }
            if(gcd(n, sum) == 1) {
                n++;
                continue;
            } else {
                printf("%lld\n", n);
                break;
            }
        }
    }

    return 0;
}