#include <stdio.h>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main() {
    int n; scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int val;
            scanf("%d", &val);

            pq.push(val);
            if(pq.size() > n) pq.pop();
        }
    }
    printf("%d\n", pq.top());
    return 0;
}