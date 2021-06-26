#include <cstdio>

int num[50];
int res[50];

void sort(int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
}

void permutation(int cnt, int max, int size) {
    if(cnt == max) {
        for(int i = 0; i < cnt - 1; i++) if(res[i] > res[i + 1]) return;
        for(int i = 0; i < cnt; i++) printf("%d ", res[i]);
        printf("\n");
        return;
    }

    for(int i = 0; i < size; i++) {
        res[cnt] = num[i];
        permutation(cnt + 1, max, size);
    }
}

int main() {
    int n, m; scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", &num[i]);
    sort(n);
    permutation(0, m, n);

    return 0;
}