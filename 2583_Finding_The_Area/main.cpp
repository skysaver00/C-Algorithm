#include <cstdio>
#include <queue>
using namespace std;
int axis[101][101];
int cpaxis[101][101];

int main() {
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);

    for(int i = 0; i < k; i++) {
        int lx, ly, rx, ry;
        scanf("%d %d %d %d", &lx, &ly, &rx, &ry);

        for(int j = lx; j < rx; j++) {
            for(int k = ly; k < ry; k++) {
                axis[k][j] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("%d ", axis[i][j]);
        }printf("\n");
    }

    return 0
}