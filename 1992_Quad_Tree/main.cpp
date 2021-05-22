#include <cstdio>
#include <queue>
#include <cstdlib>
using namespace std;

char var[65][65];
int arr[65][65];
queue<char> val;

void solve(int y, int x, int n) {
    int check = arr[y][x];
    for(int i = y; i < y + n; i++) {
        for(int j = x; j < x + n; j++) {
            if(check == 0 && arr[i][j] == 1) check = 2;
            else if(check == 1 && arr[i][j] == 0) check = 2;
        }

        if(check == 2) {
            printf("%d %d %d\n", y, x, n / 2);
            val.push('(');
            solve(y, x, n / 2);
            solve(y, x + (n / 2), n / 2);
            solve(y + (n / 2), x, n / 2);
            solve(y + (n / 2), x + (n / 2), n / 2);
            val.push(')');

            return;
        }
    }
    printf("%d %d %d\n", y, x, n / 2);
    if(check == 1) val.push('1');
    else if(check == 0) val.push('0');
}

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n ; i++) {
        scanf("%s", var[i]);
        for(int j = 0; j < n; j++) {
            arr[i][j] = var[i][j] - 0x30;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }printf("\n");
    }printf("\n");

    val.push('(');
    solve(0, 0, n);
    val.push(')');

    int len = val.size();
    while(!val.empty()) {
        printf("%c", val.front());
        val.pop();
    }
    return 0;
}