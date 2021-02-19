#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if(a + b + c != 180) {
        printf("Error\n");
        return 0;
    }

    if(a == b && a == c) {
        printf("Equilateral\n");
        return 0;
    }
    else if(a == b || a == c || b == c) {
        printf("Isosceles\n");
        return 0;
    }
    else {
        printf("Scalene");
        return 0;
    }
}