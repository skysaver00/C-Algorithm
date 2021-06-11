#include <iostream>
using namespace std;
int arr[10];
bool visit[10];

void NnM(int idx, int cnt, int max, int size) {
    if(cnt == max) {
        for(int i = 0; i < size; i++) {
            if(visit[i]) cout << arr[i] << " ";
        }cout << "\n";
        return;
    }

    for(int i = idx; i < size; i++) {
        if(visit[i]) continue;
        visit[i] = true;

        NnM(i, cnt + 1, max, size);
        visit[i] = false;
    }
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) arr[i] = i + 1;

    NnM(0, 0, m, n);
    return 0;
}