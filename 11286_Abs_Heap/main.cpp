#include <stdio.h>
#include <queue>
using namespace std;
typedef pair<int, int> pr;

priority_queue<pr, vector<pr>, greater<pr>> pq;

int main() {
    int n; scanf("%d", &n);

    while(n--) {
        int x; scanf("%d", &x);

        if(x == 0) {
            if(pq.empty()) printf("0\n");
            else {
                if(pq.top().second == 0) printf("%d\n", pq.top().first * (-1));
                else printf("%d\n", pq.top().first);
                pq.pop();
            }
        } else {
            int val = 1;
            if(x < 0) {
                x *= -1;
                val = 0;
            }
            pq.push({x, val});
        }
    }
    return 0;
}