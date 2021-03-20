#include <stdio.h>
#include <math.h>
int arr[2000];
int brr[2000];
int main() {
    int gcd, lcm;
    scanf("%d %d", &gcd, &lcm);

    int big = lcm / gcd;

    int cnt = 0;
    for(int i = 1; i <= sqrt(big); i++) {
        if(big % i == 0) {
            arr[cnt] = i;
            cnt++;
        }
    }

    for(int i = 0; i < cnt; i++) {
        brr[i] = big / arr[i];
    }

    int ans1, ans2;
    int flag = 0;
    for(int i = 0; i < cnt; i++) {
        for(int j = 2; j < sqrt(brr[i]); j++) {
            if(brr[i] % j == 0 && arr[i] % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0) {
            ans1 = arr[i] * gcd;
            ans2 = brr[i] * gcd;
        } else flag = 0;
    }

    printf("%d %d\n", ans1, ans2);
    return 0;
}