#include <stdio.h>
#include <queue>
using namespace std;
int gameArea[101][101];
long long turn[101][101];



int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &gameArea[i][j]);
        }
    }



    return 0;
}