#include <stdio.h>
#include <algorithm>
using namespace std;

int arr[1000005];

bool binary(int num, int a, int b) {
    int m;

    while(a <= b) {
        m = (a + b) / 2;
        if(arr[m] == num) return true;
        else if(arr[m] < num) a = m + 1;
        else if(arr[m] > num) b = m - 1;
    }

    return false;
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int N;
        scanf("%d", &N);
        for(int i = 0; i < N; i++) {
            scanf("%d", &arr[i]);
            //arr[i] += 2147483648;
        }
        sort(arr, arr + N);

        int M;
        scanf("%d", &M);
        for(int i = 0; i < M; i++) {
            int num;
            scanf("%d", &num);
            bool check = binary(num, 0, N);
            printf("%d\n", check);
        }

        for(int i = 0; i < N; i++) {
            arr[i] = 0;
        }
    }

    return 0;
}