#include <stdio.h>
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int degree[32001];
vector<int> con[32001];

queue<int> top;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < m; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        degree[b]++;
        con[a].push_back(b);
    }

    for(int i = 1; i <= n; i++) {
        if(degree[i] == 0) top.push(i);
    }

    while(!top.empty()) {
        int ans = top.front();
        printf("%d ", ans);
        top.pop();

        int len = con[ans].size();
        for(int i = 0; i < len; i++) {
            degree[con[ans][i]]--;
            if(degree[con[ans][i]] == 0) top.push(con[ans][i]);
        }
    }

    return 0;
}