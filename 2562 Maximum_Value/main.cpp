#include <stdio.h>

int main() {
    int arr[10];

    for(int i = 0 ; i < 9; i++) {
        scanf("%d", &arr[i]);
    }

    int max = -99999;
    int loc = -9;
    for(int i = 0; i < 9; i++) {
        if(max < arr[i]) {
            max = arr[i];
            loc = i + 1;
        }
    }

    printf("%d\n%d\n", max, loc);

    return 0;
}