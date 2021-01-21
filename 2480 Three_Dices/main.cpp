#include <stdio.h>

int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if(x == y && x == z) printf("%d\n", 10000 + 1000 * x);
    else if(x == y || y == z) printf("%d\n", 1000 + 100 * y);
    else if(x == z) printf("%d\n", 1000 + 100 * x);
    else {
        int highest = x;
        if(highest < y) highest = y;
        if(highest < z) highest = z;

        printf("%d\n", 100 * highest);
    }

    return 0;
}