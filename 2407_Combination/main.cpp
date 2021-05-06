//100! is too big!
#include <cstdio>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    long long up = 1;
    long long down = 1;

    int r = 1;

    if(m < (n / 2)) m = 100 - n;
    printf("%d\n", m);
    for(int i = m + 1; i <= n; i++) {
        up *= i;
        down *= r;

        printf("%d %d %lld %lld\n", i, r, up, down);

        if(up % down == 0) {
            up /= down;
            down = 1;
        }
        r++;
    }

    printf("%lld %lld\n", up, down);

     return 0;
}