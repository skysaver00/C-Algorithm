#include <stdio.h>
#include <algorithm>

using namespace std;
int arr[1000005];
int brr[1000005];

bool binary(int num, int a, int b) {
    if(a > b) return false;
    if(arr[(a + b) / 2] == num) return true;

    printf("%d %d", a, b);

    if(num > arr[(a + b) / 2]) {
        binary(num, ((a + b) / 2) + 1, b);
    } else {
        binary(num, a, ((a + b) / 2));
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int N;
        scanf("%d", &N);
        for(int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
        }

        int M;
        scanf("%d", &M);
        for(int i = 0; i < M; i++) {
            scanf("%d", &brr[i]);
        }

        sort(arr, arr + N);
        for(int i = 0; i < M; i++) {
            bool check = binary(brr[i], 0, N);
            printf("%d\n", check);
        }
    }

    return 0;
}