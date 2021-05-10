#include <stdio.h>

int main () {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    int vmin = v - a;
    int dvd = vmin / (a - b);

    return 0;
}