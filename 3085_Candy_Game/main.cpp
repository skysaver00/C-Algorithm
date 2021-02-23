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

    candy = count();
    if(max < candy) max = candy;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(arr[i + dy[0]][j + dx[0]] == NULL) {flag = 1;}
            else {
                temp = arr[i][j];
                arr[i][j] = arr[i + dy[0]][j + dx[0]];
                arr[i + dy[0]][j + dx[0]] = temp;
            }
            if(flag == 0) {
                candy = count();
                if(max < candy) max = candy;

                temp = arr[i][j];
                arr[i][j] = arr[i + dy[0]][j + dx[0]];
                arr[i + dy[0]][j + dx[0]] = temp;
            } else {flag = 0;}

            if(arr[i + dy[1]][j + dx[1]] == NULL) {flag = 1;}
            else {
                temp = arr[i][j];
                arr[i][j] = arr[i + dy[1]][j + dx[1]];
                arr[i + dy[1]][j + dx[1]] = temp;
            }
            if(flag == 0) {
                candy = count();
                if(max < candy) max = candy;

                temp = arr[i][j];
                arr[i][j] = arr[i + dy[1]][j + dx[1]];
                arr[i + dy[1]][j + dx[1]] = temp;
            } else {flag = 0;}

            if(arr[i + dy[2]][j + dx[2]] == NULL) {flag = 1;}
            else {
                temp = arr[i][j];
                arr[i][j] = arr[i + dy[2]][j + dx[2]];
                arr[i + dy[2]][j + dx[2]] = temp;
            }
            if(flag == 0) {
                candy = count();
                if(max < candy) max = candy;

                temp = arr[i][j];
                arr[i][j] = arr[i + dy[2]][j + dx[2]];
                arr[i + dy[2]][j + dx[2]] = temp;
            } else {flag = 0;}

            if(arr[i + dy[3]][j + dx[3]] == NULL) {flag = 1;}
            else {
                temp = arr[i][j];
                arr[i][j] = arr[i + dy[3]][j + dx[3]];
                arr[i + dy[3]][j + dx[3]] = temp;
            }
            if(flag == 0) {
                candy = count();
                if(max < candy) max = candy;

                temp = arr[i][j];
                arr[i][j] = arr[i + dy[3]][j + dx[3]];
                arr[i + dy[3]][j + dx[3]] = temp;
            } else {flag = 0;}
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