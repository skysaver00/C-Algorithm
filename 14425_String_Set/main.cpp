#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
unordered_map <string, bool> map;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, cnt;
    cnt = 0;
    cin >> n >> m;

    string word;
    for(int i = 0; i < n; i++) {
        cin >> word;
        map[word] = true;
    }

    for(int i = 0; i < m; i++) {
        cin >> word;
        if(map[word]) cnt++;
    }
    cout << cnt << "\n";
    return 0;
}