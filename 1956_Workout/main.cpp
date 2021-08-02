#include <iostream>
using namespace std;
int vil[401][401];
long long INF = 2147483647;

int main() {
    int v, e; cin >> v >> e;
    for(int i = 1; i <= v; i++) {
        for(int j = 1; j <= v; j++) {
            vil[i][j] = INF;
        }
    }

    for(int i = 0; i < e; i++) {
        int a, b, c; cin >> a >> b >> c;
        vil[a][b] = c;
    }
}