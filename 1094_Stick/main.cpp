#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    int stick = 64;
    int n = stick >> 1;
    int sum = 0;
    int sum_stick = 0;
    if(x == 64) {
        printf("1\n");
        return 0;
    }

    while(x != sum) {
        sum += n;
        if(x < sum) {
            sum -= n;
            n = n >> 1;
        } else if(x > sum) {
            sum_stick++;
            n = n >> 1;
        } else {
            sum_stick++;
            break;
        }
    }
    printf("%d\n", sum_stick);
}