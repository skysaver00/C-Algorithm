#include <stdio.h>

int time[100001][2];
int dumTime[100001][2];
bool check[100001];

int main() {
    int v;
    scanf("%d", &v);

    for(int i = 0; i < v; i++) {
        scanf("%d %d", &dumTime[i][0], &dumTime[i][1]);
    }

    int n = 0;
    int cnt2 = 0;

    time[n][0] = dumTime[n][0];
    time[n][1] = dumTime[n][1];
    n++;

    for(int i = 1; i < v; i++) {
        if(dumTime[cnt2][0] == dumTime[i][0] && dumTime[cnt2][1] == dumTime[i][1]) {
            continue;
        }
        else {
            time[n][0] = dumTime[i][0];
            time[n][1] = dumTime[i][1];
            cnt2 = i;
            n++;
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d %d\n", time[i][0], time[i][1]);
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
            }
        }

        int hour = time[select][1];
        for(int i = 0; i < n; i++) {
            if(time[i][0] < hour && time[i][1] > hour && select != i) check[i] = true;
        }

        for(int i = 0; i < n; i++) {
            printf("%d %d %d\n", time[i][0], time[i][1], check[i]);
        }

        k++;
    }

    int cnt = 0;
    for(int i = 0; i < n;  i++) {
        if(!check[i]) cnt++;
    }

    printf("%d\n", cnt);

    return 0;
}