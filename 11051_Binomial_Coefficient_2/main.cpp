#include <iostream>
#include <vector>
using namespace std;
vector<long long> triangle[1001];

int main() {
    int n, k; cin >> n >> k;
    for(int i = 1; i <= n + 1; i++) {
        for(int j = 0; j < i; j++) {
            if(j == 0) triangle[i].push_back(1);
            else if(j == i - 1) triangle[i].push_back(1);
            else if(i != 1) triangle[i].push_back((triangle[i - 1][j - 1] + triangle[i - 1][j]) % 10007);
        }
    }
    cout << triangle[n + 1][k] << "\n";

    return 0;
}