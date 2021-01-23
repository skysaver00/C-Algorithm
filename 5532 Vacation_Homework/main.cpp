#include <stdio.h>

int main() {
    int L, A, B, C, D;

    scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);

    int diva = (A / C);
    int divb = (B / D);

    if(A % C != 0) diva++;
    if(B % D != 0) divb++;

    if(diva > divb) printf("%d\n", L - diva);
    else printf("%d\n", L - divb);

    return 0;
}