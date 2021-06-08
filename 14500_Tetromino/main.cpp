#include <iostream>

using namespace std;
int n, m;
int arr[501][501];

int max(int i, int j) {
    return i > j ? i : j;
}

int on1X[4][2] = {{0, 0},
                  {0, 1},
                  {0, 2},
                  {0, 3}};
int on1Y[4][2] = {{0, 0},
                  {1, 0},
                  {2, 0},
                  {3, 0}};

int tw2X[4] = {0, 0, 1, 1};
int tw2Y[4] = {0, 1, 1, 0};

int th3X[4][8] = {{0, 0,  0, 0, 0, 0,  0,  0},
                  {0, 0,  1, 1, 0, 0,  -1, -1},
                  {0, 0,  2, 2, 0, 0,  -2, -2},
                  {1, -1, 2, 2, 1, -1, -2, -2}};
int th3Y[4][8] = {{0, 0, 0, 0,  0,  0,  0, 0},
                  {1, 1, 0, 0,  -1, -1, 0, 0},
                  {2, 2, 0, 0,  -2, -2, 0, 0},
                  {2, 2, 1, -1, -2, -2, 1, -1}};

int fo4X[4][8] = {{0, 0,  0, 0, 0, 0,  0,  0},
                  {0, 0,  1, 1, 0, 0,  -1, -1},
                  {1, -1, 1, 1, 1, -1, -1, -1},
                  {1, -1, 2, 2, 1, -1, -2, -2}};
int fo4Y[4][8] = {{0, 0, 0, 0,  0,  0,  0,  0},
                  {1, 1, 0, 0,  -1, -1, 0,  0},
                  {1, 1, 1, -1, -1, -1, -1, 1},
                  {2, 2, 1, -1, -2, -2, -1, 1}};

int fi5X[4][4] = {{0,  0, 0,  0},
                  {0,  1, 0,  -1},
                  {1,  1, -1, -1},
                  {-1, 1, 1,  -1}};
int fi5Y[4][4] = {{0, 0,  0,  0},
                  {1, 0,  -1, 0},
                  {1, -1, -1, 1},
                  {1, 1,  -1, -1}};

int one(int i, int j) {
    int t = 0;
    for (int a = 0; a < 2; a++) {
        int val = 0;
        int flag = 0;
        for (int b = 0; b < 4; b++) {
            if (i + on1Y[b][a] < n && i + on1Y[b][a] >= 0 && j + on1X[b][a] < m && j + on1X[b][a] >= 0) {}
            else {
                flag = 1;
                break;
            }
            val += arr[i + on1Y[b][a]][j + on1X[b][a]];
        }

        if (flag == 1) continue;
        else {
            if (t < val) t = val;
        }
    }
    return t;
}

int two(int i, int j) {
    int t = 0;
    int val = 0;
    int flag = 0;
    for (int b = 0; b < 4; b++) {
        if (i + tw2Y[b] < n && i + tw2Y[b] >= 0 && j + tw2X[b] < m && j + tw2X[b] >= 0) {}
        else {
            flag = 1;
            break;
        }
        val += arr[i + tw2Y[b]][j + tw2X[b]];
    }

    if(flag == 1) return t;
    else {
        if (t < val) t = val;
    }

    return t;
}

int three(int i, int j) {
    int t = 0;
    for (int a = 0; a < 8; a++) {
        int val = 0;
        int flag = 0;
        for (int b = 0; b < 4; b++) {
            if (i + th3Y[b][a] < n && i + th3Y[b][a] >= 0 && j + th3X[b][a] < m && j + th3X[b][a] >= 0) {}
            else {
                flag = 1;
                break;
            }
            val += arr[i + th3Y[b][a]][j + th3X[b][a]];
        }

        if (flag == 1) continue;
        else {
            if (t < val) t = val;
        }
    }
    return t;
}

int four(int i, int j) {
    int t = 0;
    for (int a = 0; a < 8; a++) {
        int val = 0;
        int flag = 0;
        for (int b = 0; b < 4; b++) {
            if (i + fo4Y[b][a] < n && i + fo4Y[b][a] >= 0 && j + fo4X[b][a] < m && j + fo4X[b][a] >= 0) {}
            else {
                flag = 1;
                break;
            }
            val += arr[i + fo4Y[b][a]][j + fo4X[b][a]];
        }

        if (flag == 1) continue;
        else {
            if (t < val) t = val;
        }
    }
    return t;
}

int five() {

}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int val = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int t = one(i, j);
            if(val < t) val = t;
            printf("%d\n", val);
            t = two(i, j);
            if(val < t) val = t;
            printf("two: %d\n", t);
            t = three(i, j);
            if(val < t) val = t;
            printf("three: %d\n", t);
        }
    }

    return 0;
}