#include <stdio.h>
int num[100001];
int sum[100001];

int main() {
    int n; scanf("%d", &n);

    for(int i = 0; i < n; i++)
        scanf("%d", &num[i]);

    for(int i = 0; i < n - 1; i++) {
        if(sum[i] < sum[i - 1] + num[i]) sum[i] = sum[i - 1] + num[i];
        else sum[i] = num[i];
    }

    for(int i = 0; i < n; i++) {
        scanf("%d", &sum[i]);
    }


    return 0;
}