#include <iostream>

using namespace std;

int M, N;

int ans[10];
int check[10];
void rec(int index, int choose) {
    if(choose == M) {
        for (int i = 1; i < M; i++) {
            printf("%d ", ans[i]);
        }
        printf("\n");
        return;
    }
    if(index > N) return;
    ans[choose] = index;
    rec(index + 1, choose + 1);

    ans[choose] = 0;
    rec(index + 1, choose);
}

int main() {
    scanf("%d %d", &M, &N);

    rec(0, 1);
}