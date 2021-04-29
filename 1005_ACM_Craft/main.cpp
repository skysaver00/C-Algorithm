#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;

int duration[1001];
int total[1001];
int level[1001];
vector<int> path[1001];
queue<int> topoQueue;

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        for(int i = 1; i <= n; i++) {
            scanf("%d", &duration[i]);
        }

        for(int i = 0; i < k; i++) {
            int x, y;
            scanf("%d %d", &x, &y);

            level[y]++;
            path[x].push_back(y);
        }

        for(int i = 1; i <= n; i++) {
            if(level[i] == 0) {
                topoQueue.push(i);
                total[i] += duration[i];
            }
        }

        while(!topoQueue.empty()) {
            int val = topoQueue.front();
            topoQueue.pop();

            int len = path[val].size();
            for(int j = 0; j < len; j++) {
                int next = path[val][j];
                if(total[next] > total[val] + duration[next]) {
                    total[next] = total[val] + duration[next];
                }
                topoQueue.push(next);
            }
        }

        for(int i  = 1; i <= n; i++) {
            printf("%d\n", total[i]);
        }
    }
    return 0;
}