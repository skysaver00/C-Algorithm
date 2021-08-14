#include <iostream>
using namespace std;
int terr[51][51];
int newTerr[51][51];
bool open[51][51];

int x[4] = {1, 0, -1, 0};
int y[4] = {0, 1, 0, -1};

void openTerr(int low, int high) {

}

int main() {
    int n, l, r; cin >> n >> l >> r;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) cin >> terr[i][j];
    }

    while(1) {
        openTerr(l, r);

        bool flag = false;

    }

    return 0;
}