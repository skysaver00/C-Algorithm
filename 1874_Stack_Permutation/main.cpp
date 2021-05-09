#include <cstdio>
#include <stack>
using namespace std;

int arr[100010];
char does[300005];
stack<int> st;
stack<int> emp;

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0 ; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int next = 1;
    int now = 0;
    int doesNow = 0;
    while(next <= (n + 1)) {
        if(next > n && st.empty()) break;

        if(next > n && st.top() != arr[now]) {
            printf("NO\n");
            st = emp;
            return 0;
        }

        if(st.empty()) {
            st.push(next);
            does[doesNow] = '+';
            next++;
            doesNow++;
            continue;
        }

        if(st.top() != arr[now] || st.empty()) {
            st.push(next);
            does[doesNow] = '+';
            next++;
            doesNow++;
        } else if(st.top() == arr[now]) {
            now++;
            st.pop();
            does[doesNow] = '-';
            doesNow++;
        }
    }

    for(int i = 0; i < doesNow; i++) {
        printf("%c\n", does[i]);
    }

    return 0;
}