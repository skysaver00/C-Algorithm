#include <stdio.h>
#include <algorithm>
using namespace std;
long long arr[1000001];

long long binary(long long n, long long m, long long left, long long right) {
    int mid;
    long long ans = 0;

    while(left <= right) {
        mid = (left + right) / 2;
        long long sum = 0;

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
    long long n, m;
    scanf("%lld %lld", &n, &m);

    for(int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    sort(arr, arr + n);

    long long ans = binary(n, m, 0, arr[n - 1]);
    printf("%lld\n", ans);

    return 0;
}