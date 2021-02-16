#include <stdio.h>
int arr[1000001];
int arr2[1000001];

void radix(int N) {
    for(int i = 0; i < N; i++) {
        arr2[arr[i]]++;
    }
}

void radix_lsd() {

}

void counting() {

}

int main() {

    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    radix(N);

    for(int i = 0; i <= 10000; i++) {
        for(int j = 0; j < arr2[i]; j++) {
            printf("%d\n", i);
        }
    }

    return 0;
}