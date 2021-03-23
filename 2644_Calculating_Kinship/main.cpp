#include <iostream>
#include <vector>
#include <queue>
#include <stdlib.h>

using namespace std;

int degree = 0;
vector<int> dfs[101];
queue<int> bfs;
int check[101];

void startDFS(int start, int end) {
    if(start == end) {
        cout << degree << "\n";
        exit(0);
    }

    printf("%d %d %d\n", start, end, degree);

    if(check[start] == 1) {
        printf("cnecked: %d %d %d\n", start, end, degree);
        degree--;
        return;
    } check[start] = 1;
    printf("checked the value %d\n", start);

    if(degree != 0 && dfs[start].size() == 1) {
        printf("size 0: %d %d %d\n", start, end, degree);
        degree--;
    }

    for(int i = 0; i < dfs[start].size(); i++) {
        int y = dfs[start][i];
        degree++;
        if(check[y] != 1) startDFS(y, end);
        else degree--;
    }
}

void startBFS(int start, int end) {
    if(start == end) {
        cout << degree << "\n";
        exit(0);
    }
    bfs.push(start);
    check[start] = 1;

    while(!bfs.empty()) {
        int x = bfs.front();
        bfs.pop();
        printf("mother is %d ", x);

        if(x == end) {
            cout << degree << "\n";
            exit(0);
        }


        if(dfs[x].size() == 1) {
            degree--;
        }

        degree++;
        for(int i = 0; i < dfs[x].size(); i++) {
            int y = dfs[x][i];

            if(check[y] == 0) {
                bfs.push(y);
                check[y] = 1;
            }
            printf("%d %d\n", y, degree);
        }
    }
}


int main() {
    int n;
    cin >> n;

    int a, b;
    cin >> a >> b;

    int ver;
    cin >> ver;
    while(ver--) {
        int x, y;
        cin >> x >> y;

        dfs[x].push_back(y);
        dfs[y].push_back(x);
    }

    startDFS(a, b);

    return 0;
}