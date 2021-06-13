#include <stdio.h>
char arr[51][51];
int N;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

int count() {
    int max = 1;
    int cnt = 1;
    for(int i = 0; i < N; i++) {
        cnt = 1;
        for(int j = 0; j < N; j++) {
            if(arr[i][j] == arr[i][j + 1]) cnt++;
            else {
                if(max < cnt) max = cnt;
                cnt = 1;
            }
        }
    }

    for(int j = 0; j < N; j++) {
        for(int i = 0; i < N; i++) {
            if(arr[i][j] == arr[i + 1][j]) cnt++;
            else {
                if(max < cnt) max = cnt;
                cnt = 1;
            }
        }
    }
    return max;
}

int pick() {
    int max = -9999;
    int candy = 1;
    int flag = 0;
    char temp;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            for(int k = 0; k < 4; k++) {
                if(i + dy[k] >= N || i + dy[k] < 0 || i + dx[k] >= N || i + dx[k] < 0) {flag = 1;}
                else {
                    temp = arr[i][j];
                    arr[i][j] = arr[i + dy[k]][j + dx[k]];
                    arr[i + dy[k]][j + dx[k]] = temp;
                }

                if(flag == 0) {
                    candy = count();
                    if(max < candy) max = candy;

                    temp = arr[i][j];
                    arr[i][j] = arr[i + dy[k]][j + dx[k]];
                    arr[i + dy[k]][j + dx[k]] = temp;
                } else {flag = 0;}
            }
        }
    }
    return max;
}

int main() {

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf(" %c", &arr[i][j]);
        }
    }

    int max = pick();
    printf("%d\n", max);

    return 0;
}