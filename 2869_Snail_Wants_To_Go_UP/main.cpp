#include <stdio.h>

int main () {
    int a, b, v;
    scanf("%d %d %d", &a, &b, &v);

    int vmin = v - b;
    int dvd = vmin / (a - b);

    if(vmin % (a - b) != 0) dvd++;
    printf("%d\n", dvd);

    return 0;
}