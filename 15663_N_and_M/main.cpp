#include <iostream>
#include <algorithm>
using namespace std;

int num[10];
int arr[10];
int before;

void dfs(int idx, int cnt, int max, int size) {
    if(cnt == max) {
        for(int i = 0; i < size; i++) {
            if(arr[i]) cout << num[i] << " ";
        }cout << "\n";
        return;
    }

    for(int i = idx; i < size; i++) {
        if(arr[i]) continue;
        arr[i] = true;

        dfs(i, cnt + 1, max, size);
        arr[i] = false;
    }
}

int main() {
    int m, n; cin >> m >> n;

    for(int i = 0; i < n; i++)
        cin >> num[i];
    sort(num, num + n);

    dfs()
    return 0;
}