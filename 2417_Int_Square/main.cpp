#include <cstdio>
#include <cmath>

int main() {
    long long n;
    scanf("%lld", &n);
    long long q = sqrt(double(n));

    printf("%lld\n", q);
    return 0;
}