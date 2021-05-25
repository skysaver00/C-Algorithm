#include <iostream>
#include <queue>
#include <stack>
using namespace std;
char arr[26][2];
bool check[27];
queue<char> pre;
queue<char> in;
queue<char> post;

int main() {
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        char root, left, right;
        cin >> root >> left >> right;

        arr[i][0] = left;
        arr[i][1] = right;
    }

    stack<char> c;
    char now = 'A';
    while(1) {
        if(pre.empty()) {
            pre.push(now);
            c.push(now);
        }
        cout << c.top() << endl;

        int val = c.top() - 65;
        int flag = 0;
        if(arr[val][0] != '.' && !check[arr[val][0] - 65]) {
            c.push(arr[val][0]);
            pre.push(arr[val][0]);
            flag = 1;
            check[arr[val][0] - 65] = true;
        } else if(arr[val][1] != '.' && !check[arr[val][1] - 65]) {
            c.push(arr[val][1]);
            pre.push(arr[val][1]);
            flag = 1;
            check[arr[val][1] - 65] = true;
        }

        if(flag == 0) {
            c.pop();
        }

        if(c.empty()) break;
    }

    while(!pre.empty()) {
        cout << pre.front() << endl;
        pre.pop();
    }

    return 0;
}