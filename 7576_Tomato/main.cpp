#include <bits/stdc++.h>
using namespace std;

int arr[1001][1001];
int check[1001][1001];

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void startBFS() {

}

int main() {
    int m, n;
    cin >> m >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            check[i][j] = 999999;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == -1) check[i][j] = -1;
        }
    }



    return 0;
}