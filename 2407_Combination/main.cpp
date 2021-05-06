//100! is too big!
#include <cstdio>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    long long up = 1;
    long long down = 1;

    int r = m;

    if(m < (n / 2)) m = 100 - n;
    printf("%d\n", m);
    for(int i = m + 1; i <= n; i++) {
        up *= i;
        down *= r;

        if(up % down == 0) {
            up /= down;
            down = 1;
        }
        r--;

        printf("%d %d %lld %lld\n", i, r, up, down);
    }

     return 0;
}