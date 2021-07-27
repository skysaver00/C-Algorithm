#include <iostream>
using namespace std;

long long arr[101][101];
long long INF = 2147483647;

int main() {
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j) arr[i][j] = 0;
            else arr[i][j] = INF;
        }
    }
}
