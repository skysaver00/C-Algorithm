#include <stdio.h>
int arr[10];

int main() {
    int t;
    scanf("%d", &t);

    if(t == 0) arr[0]++;

    while(t) {
        arr[(t % 10)]++;
        t /= 10;
    }

    for(int i = 9; i >= 0; i--) {
        for(int j = 0; j < arr[i]; j++) {
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}