#include <stdio.h>

int main() {
    int *ptr;
    int num1 = 10;

    ptr = &num1;

    printf("%p\n", ptr);
    printf("%d\n", num1);
    printf("%p\n", &num1);
    printf("%d\n", *ptr);

    return 0;
}