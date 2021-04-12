#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    int num  = 100000001;

    while(t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int x = floor(pow(10, a - 1));
        int y = floor(pow(10, b - 1));

        int flag;
        if(x > y) flag = 1;
        else if(x <= y) flag = 2;

        int t;
        while(1) {
            t = gcd(x, y);
            int tPow = t / floor(pow(10, c  - 1));
            printf("%d %d %d %d\n", x, y, t, tPow);
            if(tPow >= 1 && tPow <= 9) {
                printf("%d %d\n", x, y);
                break;
            }

            if(flag == 1) {
                if(y < floor(pow(10, b))) y++;
                else {
                    y = floor(pow(10, b-1));
                    x++;
                }
            } else {
                if(x < floor(pow(10, a))) x++;
                else {
                    x = floor(pow(10, a - 1));
                    y++;
                }
            }
        }
    }

    return 0;
}