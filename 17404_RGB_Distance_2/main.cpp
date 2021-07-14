#include <stdio.h>
#include <vector>
using namespace std;

vector<int> choice[3];
int val[1001];
int col[1001];

int min(int i, int j) {
    return i < j ? i : j;
}

int main() {
    int n; scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int a, b, c; scanf("%d %d %d", &a, &b, &c);
        choice[0].push_back(a);
        choice[1].push_back(b);
        choice[2].push_back(c);
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            val[0] = choice[0][j];
            col[0] = j;

            for(int k = 1; k < n - 1; k++) {
                if(col[k - 1] == 0) {
                    val[k - 1] = min(choice[k - 1][1], choice[k - 1][2]);
                } else if(col[k - 1] == 1) {
                    val[k - 1] = min(choice[k - 1][0], choice[k - 1][2]);
                } else if(col[k - 1] == 2) {
                    val[k - 1] = min(choice[k - 1][0], choice[k - 1][1]);
                }
            }

            if()
        }
    }

    return 0;
}