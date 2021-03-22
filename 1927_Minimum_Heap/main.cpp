#include <stdio.h>
#include <queue>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    priority_queue<int, vector<int>, greater<int>> queue;

    while(N--) {
        int x;
        scanf("%d", &x);

        if(x == 0) {
            if(queue.empty()) printf("0\n");
            else {
                printf("%d\n", queue.top());
                queue.pop();
            }
        } else {
            queue.push(x);
        }
    }
}