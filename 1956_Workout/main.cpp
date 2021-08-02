#include <iostream>
using namespace std;
long long vil[401][401];
long long INF = 2147483647;

void floyd(int v) {
    for(int i = 1; i <= v; i++) {
        for(int j = 1; j <= v; j++) {
            for(int k = 1; k <= v; k++) {
                if(vil[i][j] + vil[j][k] < vil[i][k])
                    vil[i][k] = vil[i][j] + vil[j][k];
            }
        }
    }
}

int main() {
    int v, e; cin >> v >> e;
    for(int i = 1; i <= v; i++) {
        for(int j = 1; j <= v; j++) {
            vil[i][j] = INF;
        }
    }

    for(int i = 0; i < e; i++) {
        int a, b, c; cin >> a >> b >> c;
        if(vil[a][b] > c) vil[a][b] = c;
    }

    floyd(v);

    int ans = INF;
    for(int i = 1; i <= v; i++) if(vil[i][i] < ans) ans = vil[i][i];
    if(ans == INF) cout << "-1\n";
    else cout << ans << "\n";

    return 0;
}