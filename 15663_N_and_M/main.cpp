#include <iostream>
#include <algorithm>

using namespace std;

int num[10];
int arr[10];
int check[10];

void dfs(int idx, int cnt, int max, int size) {
    if (cnt == max) {
        bool tf = true;
        int p = 0;
        for (int i = 0; i < max; i++) {
            cout << arr[i] << " " << check[i] << "\n";
            if (arr[i] != check[i]) {
                tf = false;
            }
        }

        if (tf) return;

        p = 0;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
            check[i] = arr[i];
        }
        cout << "\n";
        return;
    }

    for (int i = 0; i < size; i++) {
        arr[cnt] = num[i];
        dfs(i, cnt + 1, max, size);
    }
}

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
        cin >> num[i];
    sort(num, num + m);

    dfs(0, 0, n, m);
    return 0;
}