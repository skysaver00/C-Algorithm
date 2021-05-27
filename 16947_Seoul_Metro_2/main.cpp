#include <stdio.h>
#include <vector>
using namespace std;

vector<int> v[3001];
int visit[3001];
int prv[3001];
int fin[3001];
int st, en;

void cycle(int n, int pre) {
    visit[n] = 1;

    int s = v[n].size();
    for(int i = 0; i < s; i++) {
        if (visit[v[n][i]] == 0) {
            prv[v[n][i]] = n;
            cycle(v[n][i], n);
        } else if (fin[v[n][i]] == 0 && v[n][i] != pre) st = v[n][i], en = n;
    }
    fin[n] = true;
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        int l1, l2;
        scanf("%d %d", &l1, &l2);

        v[l1].push_back(l2);
        v[l2].push_back(l1);
    }

    cycle(1, 0);
    printf("%d %d\n", st, en);
    for(int i = 1; i <= n; i++) {
        printf("%d ", visit[i]);
    }printf("\n");

    prv[st] = en;
    for(int i = 1; i <= n; i++) {
        printf("%d %d\n", i, prv[i]);
    }printf("\n");

}