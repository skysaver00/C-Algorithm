#include <iostream>
using namespace std;
int n, m;
int arr[501][501];

int on1X[4][8] = {{0,0,0,0,0,0,0,0}, {0,0,1,1,0,0,-1,-1}, {1,-1,1,1,1,-1,-1,-1}};
int on1Y[4][8] = {{0,0,0,0,0,0,0,0}, {1,1,0,0,-1,-1,0,0}, {1,1,1,-1,-1,-1,-1,1}};

int one(int i, int j) {

}

int two(int i, int j) {

}

int three() {

}

int four() {

}

int five() {

}

int main() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0 ; i < n; i++) {
        for(int j = 0; j < n; j++) {

        }
    }

    return 0;
}