#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        long long n;
        scanf("%lld", &n);

        bool flag = false;
        while(n != 1) {
            if(n % 2 != 0) {
                flag = true;
                break;
            }
            n /= 2;
        }

        if(flag == false) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}