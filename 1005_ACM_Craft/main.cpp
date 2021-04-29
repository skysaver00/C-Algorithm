#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int duration[1001];
int level[1001];
vector<int> path[1001];
queue<int> topoQueue;

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        for(int i = 0; i < n; i++) {
            scanf("%d", &duration[i]);
        }

        for(int i = 0; i < k; i++) {
            int x, y;
            scanf("%d %d", &x, &y);

            
        }
    }
    return 0;
}