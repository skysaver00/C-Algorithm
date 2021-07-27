#include <iostream>
using namespace std;

int n, m;
long long arr[101][101];
long long INF = 2147483647;

void floyd() {
    for(int l = 0; l < n; l++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                for (int k = 1; k <= n; k++) {
                    if (arr[i][k] + arr[k][j] < arr[i][j])
                        arr[i][j] = arr[i][k] + arr[k][j];
                }
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) arr[i][j] = 0;
            else arr[i][j] = INF;
        }
    }

    for(int i = 0; i < m; i++) {
        int a, b, c; cin >> a >> b >> c;
        if(arr[a][b] > c) arr[a][b] = c;
    }

    floyd();

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(arr[i][j] < INF) cout << arr[i][j] << " ";
            else cout << 0 << " ";
        }cout <<"\n";
    }

    return 0;
}
