#include <stdio.h>
#include <vector>
using namespace std;

vector<int> v[3001];
int visit[3001];
int prv[3001];
int fin[3001];
int st, en;

int check[3001];

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

    for(int i = 0; i <= n; i++) {
        visit[i] = 0;
        prv[i] = 0;
        fin[i] = 0;
    }

    cycle(st, 0);
    prv[st] = en;
    int now = st;
    while(1) {
        if(check[now] == 1) break;
        check[now] = 1;
        now = prv[now];
    }

    for(int i = 1; i <= n; i++) {
        int len = 0;
        if(check[i] == 1) printf("0 ");
        else {
            int go = i;
            while(1) {
                if(check[go] == 1) {
                    printf("%d ", len);
                    break;
                }
                go = prv[go];
                len++;
            }
        }
    }printf("\n");

    return 0;
}