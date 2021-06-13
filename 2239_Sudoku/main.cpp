#include <iostream>
#include <string>
#include <vector>
using namespace std;

string mir[10];
int sudoku[10][10];
vector<int> arr;

int main() {
    for(int i = 0; i < 9; i++) cin >> mir[i];
    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            sudoku[i][j] = stoi(mir[i].at(j));
        }
    }

    return 0;
}
