#include <stdio.h>
#include <queue>

using namespace std;

int arr[5001];
int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    queue<int> queue;

    for(int i = 1; i <= N; i++) {
        queue.push(i);
    }
    int cnt = 0;

    while(1) {
        int num;
        for(int i = 0; i < K - 1; i++) {
            num = queue.front();
            queue.pop();
            queue.push(num);
        }
        num = queue.front();
        queue.pop();

        arr[cnt] = num;
        cnt++;
        if(queue.empty() == true) break;
    }

    printf("<");
    for(int i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if(i < N - 1) printf(", ");
    }
    printf(">");
    return 0;
}