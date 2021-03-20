#include <stdio.h>
#include <queue>
using namespace std;

int main() {
    int T;
    scanf("%d", &T);

    queue<int> rank;
    queue<int> number;
    int arr[101];


    for(int i = 0; i < T; i++) {
        int N, M;
        scanf("%d %d", &N, &M);

        for(int j = 0; j < N; j++) {
            int num; scanf("%d", &num);
            rank.push(num);
            arr[j] = num;
            number.push(j);
        }

        int th = 1;
        int flag = 0;
        while(!rank.empty()) {
            int cmp = rank.front();
            for(int j = 0; j < N; j++) {
                if(cmp < arr[j]) {
                    int loseRank = rank.front();
                    int loseNumber = number.front();
                    rank.pop();
                    number.pop();

                    rank.push(loseRank);
                    number.push(loseNumber);
                    flag = 1;

                    break;
                }
            }

            if(flag == 1) {
                flag = 0;
                continue;
            } else {
                int delNumber = number.front();
                rank.pop(), number.pop();

                if(delNumber == M) {
                    printf("%d\n", th);
                    break;
                }
                arr[delNumber] = - 1;
                th++;
            }
        }

        while(!rank.empty()) {
            rank.pop();
        }
        while(!number.empty()) {
            number.pop();
        }
    }

    return 0;

}