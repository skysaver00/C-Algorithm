#include <iostream>
using namespace std;

int arr[2][100001];
int total[2][100005];

int max(int i, int j) {
    return i > j ? i : j;
}

int main() {
    int n;
    cin >> n;

    while(n--) {
        int t;
        cin >> t;

        for(int i = 0; i < t; i++) {
            cin >> arr[0][i];
        }
        for(int i = 0; i < t; i++) {
            cin >> arr[1][i];
        }

        total[0][1] = arr[0][0];
        total[1][1] = arr[1][0];

        for(int i = 2; i <= t; i++) {
            total[0][i] = max(total[1][i - 1], total[1][i - 2]);
            total[0][i] += arr[0][i - 1];

            total[1][i] = max(total[0][i - 1], total[0][i - 2]);
            total[1][i] += arr[1][i - 1];
        }

        int big = max(total[0][t], total[1][t]);
        printf("%d\n", big);

        for(int i = 0; i <= t; i++) total[0][i] = total[1][i] = 0;
    }

    return 0;
}
