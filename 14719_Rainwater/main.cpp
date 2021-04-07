#include <iostream>
using namespace std;

int height[501];
int miMax[501][2];

int main() {
    int h, w;
    cin >> h >> w;

    for(int i = 0; i < w; i++) {
        cin >> height[i];
    }

    for(int i = 0; i < w; i++) {
        for(int j = 0; j < i; j++) {
            if(miMax[i][0] < height[j]) miMax[i][0] = height[j];
        }

        for(int j = i; j < w; j++) {
            if(miMax[i][1] < height[j]) miMax[i][1] = height[j];
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < w; j++) {
            cout << miMax[j][i] << " ";
        }cout << "\n";
    }

    return 0;
}