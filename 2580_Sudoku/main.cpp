#include <iostream>
using namespace std;
int sudoku[10][10];
int check[10];

bool solve(int i, int j) {
    for(int a = 0; a < 9; a++) check[a] = false;
    for(int a = 0; a < 9; a++) check[sudoku[i][a]] += 1;
    for(int a = 0; a < 9; a++) if(check[a] >= 2) return false;


    for(int a = 0; a < 9; a++) check[a] = false;
    for(int a = 0; a < 9; a++) check[sudoku[a][j]] += 1;
    for(int a = 0; a < 9; a++) if(check[a] >= 2) return false;

    int x = i / 3;
    int y = j / 3;
    for(int a = 0; a < 9; a++) check[a] = false;
    for(int a = x * 3; a < x * 3 + 3; a++) {
        for(int b = y * 3; b < y * 3 + 3; b++) {
            check[sudoku[a][b]] = true;
        }
    }
    for(int a = 0; a < 9; a++) if(check[a] >= 2) return false;

    return true;
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