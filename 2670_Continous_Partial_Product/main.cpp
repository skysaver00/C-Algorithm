#include <stdio.h>
double arr[10001];
double real[10001];

double max(double i, double j) {
    return (i > j) ? i : j;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    real[0] = arr[0];
    double val = -9999;
    for(int i = 1; i < n; i++) {
        real[i] = max(arr[i], arr[i] * real[i - 1]);
        if (val < real[i]) val = real[i];
    }
    printf("%.3lf\n", val);

    return 0;
}