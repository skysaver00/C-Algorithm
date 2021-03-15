#include <stdio.h>
int arr[100001];

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if(i != 0) arr[i] = arr[i] + arr[i - 1];
        else {}
    }

    int M;
    scanf("%d", &M);

    int from, to;
    for(int i = 0; i < M; i++) {
        scanf("%d %d", &from, &to);
        if(from == 1) {
            printf("%d\n", arr[to - 1] - 0);
        } else {
            printf("%d\n", arr[to - 1] - arr[from - 2]);
        }
    }

    return 0;
}