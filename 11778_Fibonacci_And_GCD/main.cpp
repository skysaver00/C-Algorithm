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
    printf("%lld\n",  nm);

    return 0;
}