#include <stdio.h>
#include <queue>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    priority_queue<int, vector<int>, greater<int>> queue;
    int mir_N = N;
    while(mir_N--) {
        int num;
        scanf("%d", &num);

        queue.push(num);
    }

    for(int i = 0; i < N; i++) {
        printf("%d\n", queue.top());
        queue.pop();
    }

    return 0;
}