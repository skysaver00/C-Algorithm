#include <stdio.h>
int fibo[21];
int k = 2;

int fibonacci(int n) {
    while(k <= n) {
        fibo[k] = fibo[k - 1] + fibo[k - 2];
        fibonacci(k++);
    }
    return fibo[n];
}

int main() {
    int n;
    scanf("%d", &n);

    fibo[0] = 0;
    fibo[1] = 1;

    printf("%d\n", fibonacci(n));

    return 0;
}