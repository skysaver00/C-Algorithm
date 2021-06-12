#include <iostream>
#include <vector>
using namespace std;

vector<int> height;

int solve(int left, int right) {
    if(left == right) return height[left];
    int mid = (left + right) / 2;
    int ret = max(solve(left, mid), solve(mid + 1, right));

    int lo = mid, hi = mid + 1;
    int hei = min(height[lo], height[hi]);
    ret = max(ret, hei * 2);

    while(left < lo || hi < right) {
        if(hi < right && (lo == left || height[lo - 1] < height[hi + 1])) {
            ++hi;
            hei = min(hei, height[hi]);
        } else {
            --lo;
            hei = min(hei, height[lo]);
        }
        ret = max(ret, hei * (hi - lo + 1));
    }
    return ret;
}

int main() {
    while(1) {
        int n;
        cin >> n;
        if (n == 0) break;

        for (int i = 0; i < n; i++) {
            int t;
            cin >> t;
            height.push_back(t);
        }

        int ans = solve(0, n - 1);
        cout << ans << "\n";
        height.clear();
    }
    return 0;
}