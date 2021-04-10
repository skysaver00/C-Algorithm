#include <bits/stdc++.h>
using namespace std;
long long b[200005];

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        for(int i = 0; i < n + 2; i++) {
            scanf("%d", &b[i]);
        }

        sort(b, b + n + 2);

        long long sum = 0;
        int picker = 99999999;
        int picker2 = 99999999;
        for(int i = 0; i < n + 2; i++) {
            sum += b[i]; //bn+1 * 2 + bn+2
        }

        int first = b[n + 1];
        int second = b[n];
        for(int i = 0; i < n + 2; i++) {
            sum -= b[i];
            if(double(sum) / 2 == first) {
                picker = n + 1;
                picker2 = i;
                break;
            } else if(double(sum) / 2 == second) {
                picker = n;
                picker2 = i;
                break;
            } else {
                sum += b[i];
            }
        }

        if(picker == 99999999) {
            printf("-1\n");
            continue;
        } else {
            for(int i = 0; i < n + 2; i++) {
                if(i == picker || i == picker2) continue;
                else printf("%lld ", b[i]);
            }
        }printf("\n");
    }

    return 0;
}