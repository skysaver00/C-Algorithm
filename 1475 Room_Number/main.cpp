#include <stdio.h>
#include <math.h>

int arr[10];

int main() {
    int N;
    scanf("%d", &N);

    if(N == 0) {
        printf("1\n");
        return 0;
    }

    int flag = 0;
    int sum = 0;
    while(N) {
        if(N % 10 == 9) {
            arr[6]++;
        }
        else arr[N % 10]++;

        N /= 10;
    }

    arr[6] = ceil((double)(arr[6]) / 2);

    int max = -9999;
    for(int i = 0; i <= 9; i++) {
        if(max < arr[i]) {
            max = arr[i];
        }
    }
    printf("%d\n", max);


    return 0;
}