#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        int dvd = n / 2020;
        int rem = n % 2020;

        if(dvd < rem) printf("NO\n");
        else printf("YES\n");
    }

    return 0;
}