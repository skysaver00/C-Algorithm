#include <stdio.h>

int time[100001][2];
bool check[100001];

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d %d", &time[i][0], &time[i][1]);
    }

    int select;
    int k = 0;
    while(k != n) {
        for(int i = k; i < n; i++) {
            if(!check[i]) {
                select = i;
                break;
            }
        }

        for(int i = k; i < n; i++) {
            if(time[select][1] >= time[i][1] && !check[i]) {
                select = i;
                printf("Select is %d\n", select);
            }
        }

        int hour = time[select][1];
        for(int i = 0; i < n; i++) {
            if(time[i][0] <= hour && time[i][1] >= hour && select != i) check[i] = true;
        }

        for(int i = 0; i < n; i++) {
            printf("%d %d %d\n", time[i][0], time[i][1], check[i]);
        }

        k++;
    }

    return 0;
}