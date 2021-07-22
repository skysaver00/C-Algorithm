#include <iostream>
using namespace std;
bool arr[101][101];

int main() {
    int x1, y1, x2, y2;
    for(int i = 0; i < 4; i++) {
        cin >> x1 >> y1 >> x2 >> y2;
        for(int a = x1; a < x2; i++) {
            for(int b = y1; b < y2; b++) {
                arr[a][b] = true;
            }
        }
    }

    int ans = 0;
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(arr[i][j]) ans++;
        }
    }

    cout << ans << "\n";
    return 0;
}