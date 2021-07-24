#include <iostream>
#include <algorithm>
using namespace std;

int num[10];
int arr[10];
int check[10];

void dfs(int idx, int cnt, int max, int size) {
    cout << cnt << " " << max << "\n";
    if(cnt == max) {
        bool tf = true;
        int p = 0;
        for(int i = 0; i < size; i++) {
            cout << num[i] << " " << check[p] << "\n";
            if(arr[i]) {
                if(num[i] != check[p++]) {
                    tf = false;
                }
            }
        }

        if(tf) return;

        p = 0;
        for(int i = 0; i < size; i++) {
            if(arr[i]) {
                cout << num[i] << " ";
                check[p++] = num[i];
            }
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

    for(int i = 0; i < m; i++)
        cin >> num[i];
    sort(num, num + n);

    dfs(0, 0, n, m);
    return 0;
}