#include <stdio.h>

int arr[100];
int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    for(int i = 0; i < N; i++) scanf("%d", &arr[i]);

    int sub = 99999999;
    int ans;
    for(int i = 0; i < N - 2; i++) {
        for(int j = i + 1; j < N - 1; j++) {
            for(int k = j + 1; k < N; k++) {
                int sum = arr[i] + arr[j] + arr[k];
                if(M - sum < sub && M >= sum) ans = sum;
            }
        }
    }

    printf("%d\n", ans);
    return 0;
}