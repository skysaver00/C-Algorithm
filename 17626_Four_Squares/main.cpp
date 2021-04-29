#include <stdio.h>
#include <
int arr[50001][2];

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= 223; i++) {
        arr[i * i] = 1;
    }



    return 0;
}