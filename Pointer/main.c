#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int *ptr;
    int num1 = 10;

    ptr = &num1;

    printf("%p\n", ptr);
    printf("%d\n", num1);
    printf("%p\n", &num1);
    printf("%d\n", *ptr);

    int *ptr2;
    ptr2 = malloc(sizeof(int));
    printf("%p\n", ptr2);
    printf("%d\n", *ptr2);
    int num2 = 20;

    ptr2 = &num2;
    printf("%d\n", *ptr2);

    long long *ptr3 = malloc(sizeof(long long));
    memset(ptr3, 9, 8);
    printf("%x\n", *ptr3);

    int *ptr4 = NULL;
    printf("%p\n", ptr4);

    int num4 = 40;
    ptr4 = &num4;
    printf("%p\n", ptr4);
    printf("%d\n", *ptr4);
    free(ptr2);
    free(ptr3);
    free(ptr4);

    int *ptr5;
    ptr5 = malloc(sizeof(int));
    printf("%p\n", ptr5);
    int num5 = 500;
    ptr5 = &num5;
    printf("%p\n", ptr5);
    printf("%d\n", *ptr5);
    num5 = 1000;
    printf("%p\n", ptr5);
    printf("%d\n", *ptr5);

    return 0;
}