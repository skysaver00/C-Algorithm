#include <iostream>
#include <unordered_map>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;
unordered_map<string, bool> map;
string q[500001];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    int cnt = 0;
    string word;
    for(int i = 0; i < n; i++) {
        cin >> word;
        map[word] = true;
    }

    for(int i = 0; i < m; i++) {
        cin >> word;
        if(map[word]) {
            q[cnt] = word;
            cnt++;
        }
    }
    sort(q, q + cnt);

    cout << cnt << "\n";
    for(int i = 0; i < cnt; i++) {
        cout << q[i] << "\n";
    }
    return 0;
}