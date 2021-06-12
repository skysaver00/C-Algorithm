#include <iostream>
#include <vector>
using namespace std;
int sudoku[10][10];
vector<pair<int, int>> vec;

int check(int i, int j, int num) {
}

bool solve(int p) {
    int y = vec[p].first;
    int x = vec[p].second;



    return true;
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