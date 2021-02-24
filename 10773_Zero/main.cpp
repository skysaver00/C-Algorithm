#include <stdio.h>
#include <stack>

using namespace std;

int main() {
    stack<int> money;
    int sum = 0;

    int K;
    scanf("%d", &K);
    while(K--) {
        int val;
        scanf("%d", &val);

        if(val != 0) money.push(val);
        else money.pop();
    }

    while(money.empty() != true) {
        sum += money.top();
        money.pop();
    }

    printf("%d\n", sum);
}