#include <cstdio>
#include <numeric>
using namespace std;

long long fibo[65][2][2];
int cnt[65];
long long val[2][2][2];

int main() {
    long long n, m; scanf("%lld %lld", &n, &m);
    //gcd(f(n), f(m)) == f(gcd(n, m))
    long long nm = gcd(n, m);

    long long bin = nm;
    int count = 0;
    while(bin != 0) {
        if(bin % 2 == 0) {
            cnt[count] = 0;
        } else {
            cnt[count] = 1;
        } bin /= 2;
        count++;
    }

    for(int i = 0; i < count; i++) {
        printf("%d ", cnt[i]);
    }

    return 0;
}