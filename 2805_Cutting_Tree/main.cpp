#include <stdio.h>
#include <algorithm>
using namespace std;
int arr[1000001];

long long binary(int n, int m, int left, int right) {
    int mid;
    long long ans = 0;

    while(left <= right) {
        mid = (left + right) / 2;
        int sum = 0;

        for(int i = 0; i < n; i++) {
            if(arr[i] < mid) continue;
            sum += arr[i] - mid;
        }

        if(sum >= m) {
            if(ans < mid) ans = mid;
            left = mid + 1;
        } else right = mid - 1;
    }

    return ans;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort(arr, arr + n);

    long long ans = binary(n, m, 0, arr[n - 1]);
    printf("%lld\n", ans);

    return 0;
}