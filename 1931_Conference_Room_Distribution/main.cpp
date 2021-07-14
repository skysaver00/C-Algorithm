#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
vector<pair<int, int>> vec;

int main() {
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        vec.push_back({end, start});
    }
    sort(vec.begin(), vec.end());

    int ans = 1;
    int time = vec[0].first;
    for(int i = 1; i < n; i++) {
        if(time <= vec[i].second) {
            time = vec[i].first;
            ans++;
            cout << vec[i].first << " " << vec[i].second << "\n";
        }
    }

    cout << ans << "\n";
    return 0;
}