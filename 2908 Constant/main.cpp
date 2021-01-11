#include <stdio.h>

int main() {
    int a, b;
    int reva, revb;

    scanf("%d %d", &a, &b);

    reva = revb = 0;

    int hun = 100;
    int ones = 1;
    for(int i = 0; i < 3; i++) {
        reva += (a / hun) * ones;
        revb += (b / hun) * ones;

        a = a - (a / hun) * hun;
        b = b - (b / hun) * hun;

        hun /= 10;
        ones *= 10;
    }
    if(reva > revb) printf("%d\n", reva);
    else printf("%d\n", revb);

    return 0;
}