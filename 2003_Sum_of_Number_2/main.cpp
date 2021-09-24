#include <stdio.h>
int arr[10001];

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int start, end;
    start = end = 0;

    int ans = 0;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(sum == 0) {
            sum += arr[end];
            end++;
        }
        else if(start <= end) {
            if(sum > m) {
                sum -= arr[start];
                start++;
            } else if(sum < m) {
                sum += arr[end];
                end++;
            } else {
                ans++;
                sum += arr[end];
                end++;
            }
        }
        printf("%d %d %d\n", start, end, sum);
    }

    printf("%d\n", ans);
    return 0;
}