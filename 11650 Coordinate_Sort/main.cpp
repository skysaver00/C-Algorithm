#include <stdio.h>
#include <algorithm>
using namespace std;
struct coordinate {
    int x;
    int y;
};

bool cmp(coordinate a, coordinate b) {
    if(a.x < b.x) return true;
    else if(a.x == b.x) {
        if(a.y < b.y) return true;
        else return false;
    }
    else return false;
}

coordinate x_y[100001];
int main() {
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++) scanf("%d %d", &x_y[i].x, &x_y[i].y);

    sort(x_y, x_y + N, cmp);

    for(int i = 0; i < N; i++) printf("%d %d\n", x_y[i].x, x_y[i].y);
    return 0;
}