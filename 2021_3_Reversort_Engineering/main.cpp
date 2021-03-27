#include <stdio.h>
#include <algorithm>

using namespace std;
int n, c;
int b[7];
int cnt = 1;
bool flag = false;

void findPermutations(int a[], int n) {
    do {
        for(int i = 0; i < n; i++) {
            b[i] = a[i];
        }

        int sum = 0;
        for(int i = 0; i < n -1 ; i++) {
            int min = b[i];
            int min_arr = -1;
            for(int j = i; j < n; j++) {
                if(min > b[j]) {
                    min = b[j];
                    min_arr = j;
                }
            }

            if(min_arr != -1) {
                sum += min_arr - i + 1;
                reverse(b + i, b + min_arr + 1);
            }
            else sum++;
        }
        if(sum == c) {
            for (int i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
            flag = true;
            return;
        }
    } while(next_permutation(a, a + n));

    printf("IMPOSSIBLE\n");
}

int main() {
    int t;
    scanf("%d", &t);

    while(t--) {
        scanf("%d %d", &n, &c);
        int a[] = {1, 2, 3, 4, 5, 6, 7};
        printf("Case #%d: ", cnt++);
        findPermutations(a, n);
    }

    return 0;
}