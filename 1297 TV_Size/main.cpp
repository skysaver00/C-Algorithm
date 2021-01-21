#include <stdio.h>
#include <math.h>

int main() {
    int diag, x, y;
    scanf("%d %d %d", &diag, &x, &y);

    double x2y2 = x * x + y * y;
    x2y2 = sqrt(x2y2);

    double t = double(diag) / x2y2;

    int realx = int(t * x);
    int realy = int(t * y);

    printf("%d %d\n", realx, realy);
}