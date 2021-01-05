#include <stdio.h>

int main() {
    long long S;
    scanf("%lld", &S);

    long long num = 100000;
    long long left = 0 , right = 100000;

    while(left <= right) {
        long long sum = (right + 1) * (right / 2);
        long long mid = (left + right) / 2;
        if (sum > S) right = mid - 1;
        else left = mid + 1, right = right * 2 + 1;

        printf("%lld %lld\n", sum, S);
        printf("%lld %lld\n", left, right);
    }

    long long leftsum;
    long long rightsum;

    if(left % 2 != 0) leftsum = (left + 1) * (left / 2) + ((left / 2) + 1);
    else leftsum = (left + 1) * (left / 2);

    if(right % 2 != 0) rightsum = (right + 1) * (right / 2) + ((right / 2) + 1);
    else rightsum = (right + 1) * (right / 2);

    if(S >= leftsum) printf("ll%d\n", left);
    else printf("%lld\n", right);

    return 0;
}