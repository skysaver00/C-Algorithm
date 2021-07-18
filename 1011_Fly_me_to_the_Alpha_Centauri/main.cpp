#include <cstdio>
#include <cmath>

int main() {
    int T; scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        int x, y; scanf("%d %d", &x, &y);
        int range = y - x;

        int one = (int)sqrt((double)range);
        int two = one + 1;

        if(one * one == range) printf("%d\n", one * 2 - 1);
        else if(one * two < range) printf("%d\n", two * two - 1);
        else printf("%d\n", one + two - 1);

    }
    return 0;
}