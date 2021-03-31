#include <bits/stdc++.h>
using namespace std;

struct co {
    int x;
    int y;
};

bool compare(const co& c1, const co& c2) {
    if(c1.y == c2.y) {
        return c1.x < c2.x;
    } else return c1.y < c2.y;
}

int main() {
    int n;
    cin >> n;

    struct co point[100001];

    for(int i = 0; i < n; i++) {
        cin >> point[i].x >> point[i].y;
    }

    sort(point, point + n, compare);

    for(int i = 0; i < n; i++) {
        cout << point[i].x << " " << point[i].y << "\n";
    }

    return 0;
}