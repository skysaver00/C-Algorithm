#include <stdio.h>
#include <math.h>

int N;
int A[1000001];
int main() {
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    int B, C;
    scanf("%d %d", &B, &C);

    long long cnt = N;
    for(int i = 0; i < N; i++) {
        if(A[i] - B >= 0) A[i] -= B;
        else A[i] = 0;
    }

    for(int i = 0; i < N; i++) {
        cnt += (int)(ceil(double(A[i]) / C));
    }

    printf("%lld\n", cnt);
    return 0;
}