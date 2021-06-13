#include <iostream>
#include <vector>
using namespace std;

char mir[10][10];
int sudoku[10][10];
vector<pair<int, int>> arr;

bool check(int y, int x, int num) {
    for(int i = 0; i < 9; i++) {
        if(num == sudoku[y][i]) return false;
        if(num == sudoku[i][x]) return false;
    }

    for(int i = (y / 3) * 3; i < (y / 3) * 3 + 3; i++) {
        for(int j = (x / 3) * 3; j < (x / 3) * 3 + 3; j++) {
            if(num == sudoku[i][j]) return false;
        }
    }

    return true;
}

void print() {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cout << sudoku[i][j];
        }cout << "\n";
    }
    arr.clear();
    exit(0);
}

void solve(int index) {
    if(index == arr.size()) print();

    if(index < arr.size()) {
        int y = arr[index].first;
        int x = arr[index].second;

        for (int i = 1; i <= 9; i++) {
            int ck = check(y, x, i);
            if (ck) {
                sudoku[y][x] = i;
                solve(index + 1);
            }
        }
        sudoku[y][x] = 0;
    }
}

int main() {
    for(int i = 0; i < 9; i++) scanf("%s", mir[i]);
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            sudoku[i][j] = mir[i][j] - 0x30;
            if(sudoku[i][j] == 0) arr.push_back({i, j});
        }
    }

    solve(0);
    return 0;
}
