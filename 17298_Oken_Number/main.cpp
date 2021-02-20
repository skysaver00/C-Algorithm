#include <stdio.h>
#include <stack>
using namespace std;

int arr[1000001];
int ans[1000001];

int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    stack<int> s;
    s.push(1e7 + 1);
    for(int i = N - 1; i >= 0; i--) {
        while(s.top() <= arr[i]) s.pop();
        if(s.top() > 1e7) ans[i] = -1;
        else ans[i] = s.top();
        s.push(arr[i]);
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", ans[i]);
    }
    printf("\n");

    return 0;
}