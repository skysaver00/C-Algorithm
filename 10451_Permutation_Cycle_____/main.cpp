#include <stdio.h>
#include <deque>
using namespace std;
int arr[1001];
int check[1001];

deque<int> dq;

void dfs(int n, int val) {
    if(check[n] != 0) return;
    check[n] = val;

    
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        int n;
        scanf("%d", &n);

        for(int i = 1; i <= n; i++) scanf("%d", &arr[i]);

        int t = 0;
        for(int i = 1; i <= n; i++) {
            dfs(i, t);
        }
    }
}