#include <stdio.h>

int arr[4];
int brr[2];

int main() {
    int sum = 0;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 4; j++) {
            scanf("%d", &arr[j]);
            sum += arr[j];
        }
        brr[i] = sum;
        sum = 0;
    }

    if(brr[0] > brr[1]) printf("%d\n", brr[0]);
    else printf("%d\n", brr[1]);

    return 0;
}