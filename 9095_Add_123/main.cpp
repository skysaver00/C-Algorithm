#include <stdio.h>
int arr[12];

int main() {
    for(int i = 1; i <= 11; i++) {
        if(i == 1) {
            arr[i] = 1;
        } else if(i == 2) {
            arr[i] = arr[i - 1] + 1;
        } else if(i == 3) {
            arr[i] = arr[i - 1] + arr[i - 2] + 1;
        } else {
            arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
        }
    }

    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);

        printf("%d\n", arr[n]);
    }

    return 0;
}