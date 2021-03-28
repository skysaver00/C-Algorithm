#include <iostream>
#include <algorithm>

using namespace std;

using namespace std;
char land[26][26];
int check[26][26];
bool flag = false;
int cnt = 1;
int n;

int _x[4] = {1, 0, -1, 0};
int _y[4] = {0, 1, 0, -1};

void startDFS(int y, int x) {
    if(check[y][x] != 0) return;
    if(land[y][x] == '0') return;
    flag = true;
    check[y][x] = cnt++;

    for(int i = 0; i < 4; i++) {
        int newY = y + _y[i];
        int newX = x + _x[i];

        if(check[newY][newX] == 0 && land[newY][newX] != 0 && newY < n && newY >= 0 && newX < n && newX >= 0) {
            startDFS(newY, newX);
        }
    }
}

int main() {
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> land[i];
    }

    int now = 0;
    int arr[2500];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            startDFS(i, j);

            if(flag) {
                arr[now++] = cnt - 1;
                cnt = 1;
                flag = false;
            }
        }
    }

    sort(arr, arr + now);

    printf("%d\n", now);
    for(int i = 0; i < now; i++) {
        printf("%d\n", arr[i]);
    }
}