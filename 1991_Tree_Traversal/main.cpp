#include <iostream>
using namespace std;
char tree[26][2];

void pre(char root) {
    if(root == '.') return;

    cout << root;
    pre(tree[root - 'A'][0]);
    pre(tree[root - 'A'][1]);
}

void in(char root) {
    if(root == '.') return;

    in(tree[root - 'A'][0]);
    cout << root;
    in(tree[root - 'A'][1]);
}

void post(char root) {
    if(root == '.') return;

    post(tree[root - 'A'][0]);
    post(tree[root - 'A'][1]);
    cout << root;
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        char root, left, right;
        cin >> root >> left >> right;
        tree[root - 'A'][0] = left;
        tree[root - 'A'][1] = right;
    }

    pre('A');
    cout << endl;
    in('A');
    cout << endl;
    post('A');
    cout << endl;
    return 0;
}