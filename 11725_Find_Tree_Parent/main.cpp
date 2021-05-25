#include <stdio.h>
#include <vector>
using namespace std;
int n;
vector<int> arr[100005];
int check[100005];
int root[100005];

void dfs(int i) {
    if(check[i] == 1) return;
    check[i] = 1;

    int t = arr[i].size();
    for(int j = 0; j < t; j++) {
        if(arr[i][j] != 0 && check[arr[i][j]] == 0) {
            root[arr[i][j]] = i;
            dfs(arr[i][j]);
        }
        if(arr[i][j] == 0) return;
    }
}

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n - 1; i++) {
        int one, two;
        scanf("%d %d", &one, &two);
        arr[one].push_back(two);
        arr[two].push_back(one);
    }

    dfs(1);
    for(int i = 2; i <= n; i++) printf("%d\n", root[i]);

    return 0;
}