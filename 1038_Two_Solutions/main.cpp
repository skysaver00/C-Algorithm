#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int solutions[100001];

int binSearch(int left, int right, int val, int val2) {
    int mid = (left + right) / 2;
    
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) scanf("%d", &solutions[i]);
    sort(solutions, solutions + n);

    int one = -1100000000, two = -1100000000;
    for(int i = 0; i < n - 1; i++) {
        int ori = solutions[i];
        int ori2 = binSearch(i + 1, n, ori, ori);
    }

    return 0;
}