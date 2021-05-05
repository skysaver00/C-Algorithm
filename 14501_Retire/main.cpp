#include <iostream>
using namespace std;
int workworkwork[1001][2];
int total[1001];

int max(int i , int j) {
    return i > j ? i : j;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> workworkwork[i][0] >> workworkwork[i][1];
    }

    for(int i = 1; i < n; i++) {
        total[i + workworkwork[i][0]] = max(total[i + workworkwork[i][0]], );
    }



    return 0;
}