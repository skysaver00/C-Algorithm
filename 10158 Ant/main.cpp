#include <stdio.h>

int main() {
    int w, h;
    scanf("%d %d", &w, &h);

    int p, q;
    scanf("%d %d", &p, &q);

    int t;
    scanf("%d", &t);

    int x = (p + t) / w;
    int y = (q + t) / h;

    int _x;
    int _y;

    if (x % 2 == 0) _x = (p + t) % w;
    else _x = w - (p + t) % w;
    if (y % 2 == 0) _y = (q+t) % h;
    else _y = h - (q + t) % h;

    printf("%d %d\n", _x, _y);
    return 0;
}