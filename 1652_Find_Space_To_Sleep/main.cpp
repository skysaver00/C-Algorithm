#include <stdio.h>
bool arr[101][101];
int n;

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n ; i++) {
        for(int j = 0; j < n; j++) {
            char s; scanf("%c", &s);
            if(s == '.') arr[i][j] = 0;
            else arr[i][j] = 1;
        }
    }

    int hor, ver;
    hor = ver = 0;
    for(int i = 0; i < n; i++) {
        int check = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i][j] == 0) check++;
            else check = 0;

            if(check >= 2) {
                hor++;
                break;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

        }
    }
    return 0;
}