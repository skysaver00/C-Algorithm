/*#include <stdio.h>
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
}*/ //우선순위 큐 의 힙 정렬 logN * while문 N = N * logN
//속도 = 492ms -> 0.492s

#include <stdio.h>
#include <algorithm>

int arr[1000001];
using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    sort(arr, arr + N);

    for(int i = 0; i < N; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
} //기본 algorithm 라이브러리 해결 -> 퀵과 insertion을 적절히 이용한 문제
//속도 = 392ms -> 0.392초 훨씬 빠름