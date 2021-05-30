#include <stdio.h>
#include <math.h>
#include <queue>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pqRight;
priority_queue<int> pqLeft;

int makeCeil(int m) {
    double t = m;
    t /= 2;
    t = ceil(t);

    return t;
}

int main() {
    int t; scanf("%d", &t);
    while(t--) {
        int ten = 0; //10이되면 \n한다.
        int flag = 0; //마지막에 \n해야하나 말아야하나 정함.

        int m; scanf("%d", &m);
        int mm = makeCeil(m);

        printf("%d\n", mm);
        for(int i = 1; i <= m; i++) {
            int val; scanf("%d", &val);
            if(i == 1) pqRight.push(val);
            else {
                if(val <= pqRight.top()) pqLeft.push(val);
                else pqRight.push(val);
            }

            if(i % 2 == 1) {
                ten++; flag = 1;
                if(pqRight.size() > pqLeft.size()) printf("%d ", pqRight.top());
                else printf("%d ", pqLeft.top());
                if(ten == 10) {
                    printf("\n"); flag = 0; ten = 0;
                }
            }

            if(i % 2 == 0) {
                int right = pqRight.size();
                int left = pqLeft.size();
                if(abs(right - left) >= 2) {
                    if(pqRight.size() > pqLeft.size()) {
                        int move = pqRight.top();
                        pqRight.pop();
                        pqLeft.push(move);
                    } else {
                        int move = pqLeft.top();
                        pqLeft.pop();
                        pqRight.push(move);
                    }
                }
            }
        }
        if(flag == 1) printf("\n");
        pqRight = priority_queue<int, vector<int>, greater<int>>();
        pqLeft = priority_queue<int>();
    }
    return 0;
}