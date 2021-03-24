#include <stdio.h>

int main() {
    int arr[6];
    int brr[6];

    for(int i = 0; i < 6; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < 6; i++) {
        scanf("%d", &brr[i]);
    }

    int upper = 0;
    int lower = 36;

    for(int i = 0; i < 6; i++) {
        int cnt = 0;
        for(int j = 0; j < 6; j++) {
            if(arr[i] > brr[j]) cnt++;
        }
        upper += cnt;
    }

    for(int i = 2; i < 18; i++) {
        while(upper % i == 0 && lower % i == 0) {
            upper /= i;
            lower /= i;
        }
    }

    printf("%d/%d\n", upper, lower);
    return 0;
}