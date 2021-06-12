#include <iostream>
#include <vector>
using namespace std;

int sudoku[10][10];
vector<pair<int, int>> vec;

bool check(int y, int x, int num) {
    for (int i = 0; i < 9; i++) {
        if (num == sudoku[i][x]) return false;
        if (num == sudoku[y][i]) return false;
    }

    for (int i = (y / 3) * 3; i < (y / 3) * 3 + 3; i++) {
        for (int j = (x / 3) * 3; j < (x / 3) * 3 + 3; j++) {
            if (num == sudoku[i][j]) return false;
        }
    }

    return true;
}

void print() {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << sudoku[i][j] << " ";
        }
        cout << "\n";
    }
    exit(0);
}

void solve(int p) {
    if (p == vec.size()) print();

    int y = vec[p].first;
    int x = vec[p].second;

    for (int i = 1; i <= 9; i++) {
        if (check(y, x, i)) {
            sudoku[y][x] = i;
            solve(p + 1);
        }
    }
    sudoku[y][x] = 0;
    return;
}

int main() {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> sudoku[i][j];
            if(sudoku[i][j] == 0) vec.push_back({i, j});
        }
    }
    solve(0);

    return 0;
}