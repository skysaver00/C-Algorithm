#include <iostream>
using namespace std;

int height[501];
int miMax[501][2];

int min(int i, int j) {
    return (i > j) ? j : i;
}

int main() {
    int h, w;
    cin >> h >> w;

    for(int i = 0; i < w; i++) {
        cin >> height[i];
    }

    for(int i = 0; i < w; i++) {
        for(int j = 0; j <= i; j++) {
            if(miMax[i][0] < height[j]) miMax[i][0] = height[j];
        }

        for(int j = i; j < w; j++) {
            if(miMax[i][1] < height[j]) miMax[i][1] = height[j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < w; i++) {
        cnt += min(miMax[i][0], miMax[i][1]) - height[i];
    }

    cout << cnt << endl;
    return 0;
}