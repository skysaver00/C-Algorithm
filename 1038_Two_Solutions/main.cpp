#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int solu[100001];

int binSearch(int left, int right, int val, int point) {
    int mid;
    int now = point;
    while(left <= right) {
        //("%d %d %d %d\n", solu[left], solu[right], val, point);
        mid = (left + right) / 2;
        if (abs(solu[point] + solu[mid]) < abs(val)) {
            val = solu[point] + solu[mid];
            now = mid;
        }

        if(abs(solu[point] + solu[mid]) < abs(solu[point] + solu[mid + 1])) {
            right = mid - 1;
        } else left = mid + 1;
    }
    //printf("%d %d\n", solu[point], solu[now]);
    return solu[now];
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) scanf("%d", &solu[i]);
    sort(solu, solu + n);

    int one = -1100000000, two = -1100000000;
    for(int i = 0; i < n - 1; i++) {
        int ori = solu[i];
        int ori2 = binSearch(i + 1, n - 1, 2100000000, i);

        if(abs(ori + ori2) < abs(one + two)) {
            one = ori;
            two = ori2;
        }
    }
    if(one > two) {
        int t = one;
        one = two;
        two = t;
    }
    printf("%d %d\n", one, two);

    return 0;
}