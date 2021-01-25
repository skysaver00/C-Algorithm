#include <stdio.h>
int rev(int num) {
    int t = 0;

    while(num) {
        t = t * 10 + num % 10;
        num /= 10;
    }
    return t;
}

int main() {
    int x;
    int y;

    scanf("%d %d", &x, &y);

    printf("%d\n", rev(rev(x) + rev(y)));

    return 0;
}