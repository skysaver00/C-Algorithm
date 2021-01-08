#include <stdio.h>
bool arr[2021];

int main() {
    int arr2[100001];

    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr2[i]);
    }

    for(int i = 0; i < N; i++) {
        arr[arr2[i] + 1000] = true;
    }

    for(int i = 0; i < 2021; i++) {
        if(arr[i] == true) printf("%d ", i - 1000);
    }
    printf("\n");

    return 0;
}