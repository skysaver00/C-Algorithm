#include <stdio.h>
int num[100001];
int sum[100001];

int main() {
    int n; scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    sum[0] = num[0];
    int max = sum[0];
    for(int i = 1; i < n; i++) {
        if(sum[i] < sum[i - 1] + num[i]) sum[i] = sum[i - 1] + num[i];
        else sum[i] = num[i];

        if(sum[i] > max) max = sum[i];
    }

    printf("%d\n", max);
    return 0;
}