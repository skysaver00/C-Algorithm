#include <stdio.h>
#include <math.h>
int arr[50001][2];

int main() {
    int n;
    scanf("%d", &n);

    for(int i = sqrt(n); i >= 1; i--) {
        for(int j = 1; j <= n; j++) {
            if(arr[j][1] == j) continue;
            if(arr[j][1] + (i * i) * ((j - arr[j][1]) / (i * i)) > j) continue;
            arr[j][0] += (j - arr[j][1]) / (i * i);
            arr[j][1] += (i * i) * ((j - arr[j][1]) / (i * i));

            if(j == n)  {
                printf("%d\n", arr[n][0]);
                printf("%d\n", arr[n][1]);
            }
        }
    }

    printf("%d\n", arr[n][0]);
    printf("%d\n", arr[n][1]);


    return 0;
}