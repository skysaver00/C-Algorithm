#include <stdio.h>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;

int main() {
    int n; scanf("%d", &n);

    while(n--) {
        int x; scanf("%d", &x);

        if(x == 0) {
            if(pq.empty()) printf("0\n");
            else {
                printf("%d\n", pq.top());
                pq.pop();
            }
        } else {
            
        }
    }
}