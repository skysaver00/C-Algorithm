#include <stdio.h>
#include <vector>

using namespace std;

int cnt[1001];
int check[1001];
vector<int> dfs[1001];

void startDFS(int i) {
    if(check[i] == 1) return;
    check[i] = 1;

    int y = dfs[i][0];
    if(check[y] == 0) startDFS(y);
}

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int N;
        scanf("%d", &N);

        for(int i = 1; i <= N; i++) {
            int pi;
            scanf("%d", &pi);

            dfs[i].push_back(pi);
        }

        int ck = 1;
        bool flag = false;
        for(int i = 1; i <= N; i++) {
            if(cnt[i] == 0) startDFS(i);
            else continue;

            /*for(int j = 1; j <= N; j++) {
                printf("%d ", check[i]);
            }printf("\n");*/

            for(int j = 1; j <= N; j++) {
                if(check[j] == 1 && cnt[j] == 0) {
                    flag = true;
                    cnt[j] = ck;
                }
            }

            if(flag) {
                ck++;
                flag = false;
            }

            for(int j = 1; j <= N; j++) {
                check[j] = 0;
            }

            /*for(int j = 1; j <= N; j++) {
                printf("%d ", cnt[j]);
            }printf("\n");*/
        }

        int max = -1;
        for(int i = 1; i <= N; i++) {
            if(max < cnt[i]) max = cnt[i];
        }

        printf("%d\n", max);

        for(int i = 1; i <= N; i++) {
            dfs[i].clear();
            cnt[i] = 0;
        }
    }

    return 0;
}