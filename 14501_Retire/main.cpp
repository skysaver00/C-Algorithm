#include <iostream>
using namespace std;
int workworkwork[1010][2];
int total[1010];

int max(int i , int j) {
    return i > j ? i : j;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> workworkwork[i][0] >> workworkwork[i][1];
    }

    for(int i = 0; i < n; i++) {
        total[i + workworkwork[i][0]] = max(total[i] + workworkwork[i][1], total[i + workworkwork[i][0]]);
        for(int j = i + workworkwork[i][0]; j < n; j++) {
            if(total[j] < total[i + workworkwork[i][0]]) total[j] = total[i + workworkwork[i][0]];
        }

        /*printf("%d %d\n", total[i] + workworkwork[i][1], total[i + workworkwork[i][0]]);

        for(int j = 0; j <= n; j++) {
            printf("%d\n", total[j]);
        }*/
    }

    int ma = 0;
    for(int i = 0; i <= n; i++) {
        ma = max(ma, total[i]);
    }

    printf("%d\n", ma);



    return 0;
}