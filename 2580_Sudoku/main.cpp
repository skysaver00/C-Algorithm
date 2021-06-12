#include <iostream>
using namespace std;
int sudoku[10][10];
bool check[10];

void solve(int i, int j) {
    for(int a = 0; a < 9; a++) check[a] = false;
    for(int a = 0; a < 9; a++) {
        check[sudoku[i][a]] = true;
        check[sudoku[a][j]] = true;
    }
    int x = i / 3;
    int y = j / 3;
    for(int a = x * 3; a < x * 3 + 3; a++) {
        for(int b = y * 3; b < y * 3 + 3; b++) {
            check[sudoku[a][b]] = true;
        }
    }
}

int main() {
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            cin >> sudoku[i][j];
        }
    }
    solve(0, 0);

    return 0;
}