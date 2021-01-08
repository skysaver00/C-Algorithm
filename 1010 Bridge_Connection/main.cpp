#include <stdio.h>
int bridge[31][31];

int main() {
    int N, M;

    int t;
    scanf("%d", &t);

    for(int test = 0; test < t; test++) {

        scanf("%d %d", &N, &M);

        for (int i = 1; i <= M; i++) bridge[1][i] = i;
        for (int i = 0; i <= M; i++) bridge[i][i] = 1;

        int sum = 0;
        for (int i = 2; i <= N; i++) {
            for (int j = 3; j <= M; j++) {
                for (int k = 1; k < j; k++) {
                    sum += bridge[i - 1][k];
                }
                bridge[i][j] = sum;
                sum = 0;
            }
        }

        printf("%d\n", bridge[N][M]);
    }

    return 0;
}