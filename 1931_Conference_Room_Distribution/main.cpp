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

    for(int i = 0; i < n; i++) {
        cout << vec[i].first << " " << vec[i].second << "\n";
    }

    return 0;
}