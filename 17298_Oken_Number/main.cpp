#include <stdio.h>
#include <stack>
using namespace std;

int arr[1000001];

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    stack<int> s;

    s.push(-1);
    int max = arr[N - 1];
    for(int i = N - 2; i >= 0; i--) {
        if(arr[i] > s.top()) {
            if(arr[i] > max) {
                s.push(-1);
                max = arr[i];
            }
            else s.push(max);
        }
        else {
            if (arr[i] < arr[i + 1]) {
                s.push(arr[i + 1]);
            } else s.push(max);
        }
    }

    while(!s.empty()) {
        printf("%d ", s.top());
        s.pop();
    }
    printf("\n");

    return 0;
}