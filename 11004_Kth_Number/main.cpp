#include <stdio.h>
#include <queue>
using namespace std;

priority_queue<int> pq;

int main () {
    int n, k;
    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        pq.push(x);
        if(pq.size() > k) pq.pop();
    }
    printf("%d\n", pq.top());

    return 0;
}