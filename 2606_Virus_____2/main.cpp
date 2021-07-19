#include <iostream>
#include <vector>
using namespace std;

vector<int> computer[101];
bool check[101];
int infect;

void startDFS(int i) {
    if(check[i]) return;
    check[i] = true;
    infect++;

    for(int j = 0; j < computer[i].size(); j++) {
        startDFS(computer[i][j]);
    }

    return;
}

int main() {
    int n; cin >> n;
    int m; cin >> m;

    for(int i = 0; i < m; i++) {
        int from, to;
        cin >> from >> to;
        computer[from].push_back(to);
        computer[to].push_back(from);
    }

    startDFS(1);
    cout << infect - 1 << "\n";

    return 0;
}