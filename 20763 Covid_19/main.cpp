#include <stdio.h>

int main() {

    int p, q;
    scanf("%d %d", &p, &q);

    if(p <= 50 && q <= 10) {
        printf("White\n");
        return 0;
    }
    if(q > 30) {
        printf("Red\n");
        return 0;
    }
    printf("Yellow\n");
    return 0;
}