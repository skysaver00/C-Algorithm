#include <cstdio>
#include <stack>
using namespace std;

int arr[100001];
char does[200005];
stack<int> st;

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0 ; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int next = 1;
    int now = 0;
    int doesNow = 0;
    while(next != (n + 1) && st.empty()) {
        if(st.top() != arr[now]) {
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

        for(int i = 0; i < doesNow; i++) {
            printf(" %c", does[i]);
        }
    }

    return 0;
}