#include <stdio.h>
#include <algorithm>
using namespace std;
int number[50];
int visit[50];

void dfs(int cnt, int max, int size) {
    if(cnt == max) {
        for(int i = 0; i < size; i++) if(visit[i]) printf("%d", number[i]);
        printf("\n");
        return;
    }

    
}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", &number[i]);
    sort(number, number + n);

    dfs(0, m, n);
    return 0;
}