#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, pair<int, int>>> vec;
int parent[10001];

int Find(int x)
{
    if (parent[x] == x) return x;
    else return parent[x] = Find(parent[x]);
}

void Union(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if (x != y) parent[y] = x;
}

bool SameParent(int x, int y)
{
    x = Find(x);
    y = Find(y);

    if (x == y) return true;
    else return false;
}

int main() {
    int v, e; cin >> v >> e;
    for(int i = 0; i < e; i++) {
        int a, b, c; cin >> a >> b >> c;
        vec.push_back({c, {a, b}});
    }
    sort(vec.begin(), vec.end());

    int ans = 0;
    for(int i = 1; i <= v; i++) parent[i] = i;
    for(int i = 0; i < e; i++) {
        if(SameParent(vec[i].second.first, vec[i].second.second) == false) {
            Union(vec[i].second.first, vec[i].second.second);
            ans = ans + vec[i].first;
        }
    }
    cout << ans << "\n";
    return 0;
}
