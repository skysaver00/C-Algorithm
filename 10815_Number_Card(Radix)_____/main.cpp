#include <stdio.h>
bool radix[20000001];

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        radix[val + 10000000] = true;
    }

    int m;
    scanf("%d", &m);
    for(int i = 0; i < m; i++) {
        int val;
        scanf("%d", &val);
        if(radix[val + 10000000]) printf("1 ");
        else printf("0 " );
    }
    return 0;
}