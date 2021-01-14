#include <stdio.h>
int queue[1000010];

int main() {
    int N;
    scanf("%d", &N);

    int k = 1;

    for(int i = 2 * N - 2; i > N - 2; i--) {
        queue[i] = k;
        k++;
    }

    int right = 2 * N - 2;
    int left = N - 2;

    while(queue[1] == 0 && N != 1) {
        queue[right--] = 0;

        queue[left--] = queue[right];
        queue[right] = 0;
        right--;
    }

    if(N == 1) printf("1\n");
    else printf("%d\n", queue[1]);

    return 0;
}