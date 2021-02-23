#include <stdio.h>
int arr[41];
int check[1001];

int main() {
    int T;
    scanf("%d", &T);

    for(int i = 1; i <= 40; i++) arr[i] = (i * (i + 1)) / 2;

    for(int i = 1; i < 40; i++) {
        for(int j = 1; j < 40; j++) {
            for(int k = 1; k < 40; k++) {
                if(arr[i] + arr[j] + arr[k] > 1000) continue;
                else {
                    check[arr[i] + arr[j] + arr[k]] = 1;
                }
            }
        }
    }

    while(T--) {
        int k;
        scanf("%d", &k);
        if(check[k] == 1) printf("1\n");
        else printf("0\n");
    }
}