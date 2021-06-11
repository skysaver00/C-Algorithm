#include <iostream>
using namespace std;
int arr[10];
bool visit[10];

void NnM(int idx, int cnt, int max, int size) {
    if(cnt == max) {

        return;
    }

    for(int i = idx, i < size; )
}

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) arr[i] = i + 1;

    NnM(0, 0, m, n);
}