#include <iostream>
#include <vector>
using namespace std;
vector<long long> triangle[1001];

int main() {
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            if(j == 0) triangle[i].push_back(1);
        }
    }

    return 0;
}