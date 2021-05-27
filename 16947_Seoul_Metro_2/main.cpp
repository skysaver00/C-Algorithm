#include <stdio.h>
#include <vector>
using namespace std;

vector<int> v[3001];
int check[3001];
int visit[3001];

int cycle(int pre, int n) {
    if(check[n] == 1) return n;
    check[n] = 1;

    int prev = n;
    int s = v[n].size();
    for(int i = 0; i < s; i++) {
        if(prev == v[n][i]) continue;
        printf("c: : %d\n", v[n][i]);
        cycle(prev, v[n][i]);
    }
    return 0;
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

    for(int i = 1; i <= n; i++) {
        int t = cycle(-1, i);
        printf("%d\n", t);
    }

}