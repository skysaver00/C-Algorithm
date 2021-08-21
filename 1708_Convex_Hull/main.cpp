#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Point {
    long long x, y;
    Point(long long a, long long b) :x(a), y(b) {};
    Point() {};
    bool operator<(const Point &rhs) const {
        if (x != rhs.x) return x < rhs.x;
        return y < rhs.y;
    }
};
vector<Point> point;
vector<Point> hull;

long long ccw(Point pt1, Point pt2, Point pt3) {
    long long ret = pt1.x * pt2.y + pt2.x * pt3.y + pt3.x * pt1.y;
    ret -= (pt2.x * pt1.y + pt3.x * pt2.y + pt1.x * pt3.y);
    return ret;
}

long long dist(Point pt1, Point pt2) {
    long long dx = pt2.x - pt1.x;
    long long dy = pt2.y - pt1.y;
    return dx * dx + dy * dy;
}

int main(){
    int N;
    cin >> N;
    point.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> point[i].x >> point[i].y;
    }

    swap(point[0], *min_element(point.begin(), point.end()));
    sort(point.begin() + 1, point.end(), [](Point x, Point y) {
        long long cw = ccw(point[0], x, y);
        if (cw == 0) return dist(point[0], x) < dist(point[0], y);
        return cw > 0;
    });

    for (auto i : point) {
        while (hull.size() >= 2 && ccw(hull[hull.size() - 2], hull.back(), i) <= 0) {
            hull.pop_back();
        }
        hull.push_back(i);
    }
    cout << hull.size() << endl;
    return 0;
}