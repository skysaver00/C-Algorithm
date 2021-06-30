#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int cor[1000001];
vector<pair<int,int>> vec;

bool cmp(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;
}

int main() {
    int N; scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &cor[i]);
        vec.push_back({cor[i], i});
    }
    sort(vec.begin(), vec.end());

    int now = vec[0].first;
    int cnt = 0;
    cor[vec[0].second] = 0;
    for(int i = 1; i < N; i++) {
        if(vec[i].first == now) {
            cor[vec[i].second] = cnt;
        } else if(vec[i].first > now) {
            now = vec[i].first;
            cnt++;
            cor[vec[i].second] = cnt;
        }
    }

    for(int i = 0; i < N; i++) {
        printf("%d ", cor[i]);
    }printf("\n");

    return 0;
}