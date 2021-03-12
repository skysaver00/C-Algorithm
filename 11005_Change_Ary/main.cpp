#include <stdio.h>
char arr[100];

int main() {
    int N, B;
    scanf("%d %d", &N, &B);

    int i = 0;
    while(N) {
        int remain = N % B;
        if(remain >= 10) {
            arr[i] = remain + 55;
        } else arr[i] = remain;
        N /= B;
        i++;
    }

    int j = i - 1;
    while(j >= 0) {
        if(arr[j] <= 90 && arr[j] >= 65) printf("%c", arr[j]);
        else printf("%d", arr[j]);
        j--;
    }

    return 0;
}