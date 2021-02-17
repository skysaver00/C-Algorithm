#include <stdio.h>

short arr[30001];

int max(int a, int b, int c) {
    int m;
    if(a > b) m = a;
    else m = b;
    if(c > m) m = c;

    return m;
}

int main() {
    int t;
    int n;
    scanf("%d", &t);

    int c0, c1, c2;
    c0 = c1 = c2 = 0;
    while(t--) {
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);

            if(arr[i] % 3 == 0) c0++;
            else if(arr[i] % 3 == 1) c1++;
            else c2++;
        }

        int bal_n = n / 3;
        int ma = max(c0, c1, c2);
        int ans = 0;
        if(ma == c0) {
            while(c0 > bal_n) {
                c0--;
                c1++;
                ans++;
            }
            while(c1 > bal_n) {
                c1--;
                c2++;
                ans++;
            }
        }
        else if(ma == c1) {
            while(c1 > bal_n) {
                c1--;
                c2++;
                ans++;
            }
            while(c2 > bal_n) {
                c2--;
                c0++;
                ans++;
            }
        }
        else {
            while(c2 > bal_n) {
                c2--;
                c0++;
                ans++;
            }
            while(c0 > bal_n) {
                c0--;
                c1++;
                ans++;
            }
        }
        printf("%d\n", ans);
        c0 = c1 = c2 = 0;
    }

    return 0;
}