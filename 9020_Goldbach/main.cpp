#include <stdio.h>
#include <math.h>
bool arr[10001];

int main() {
    arr[1] = 1;
    for(int i = 2; i <= sqrt(10000); i++) {
        if(arr[i] == 1) continue;
        else {
            for(int j = 2 * i; j <= 10000; j += i) {
                arr[j] = 1;
            }
        }
    }

    int T;
    scanf("%d", &T);

    for(int i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);
        for(int j = n / 2 + 1; j >= 2; j--) {
            if(arr[j] == 0 && arr[n - j] == 0) {
                int min, max;
                if(n - j > j) {
                    min = j;
                    max = n - j;
                } else {
                    min = n - j;
                    max = j;
                }
                printf("%d %d\n", min, max);
                break;
            }
        }
    }
}