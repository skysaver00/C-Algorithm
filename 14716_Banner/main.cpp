#include <stdio.h>
#include <queue>
using namespace std;
bool banner[251][251];
int check[251][251];

int x[10] = {1, 1, 0, -1, -1, -1, 0, 1};
int y[10] = {0, 1, 1, 1, 0, -1, -1, -1};

queue<pair<int, int>> que;

void startBFS(int i, int j) {

}

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &banner[i][j]);
        }
    }

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            startBFS(i, j);
        }
    }

    return 0;
}