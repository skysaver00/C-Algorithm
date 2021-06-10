#include <iostream>
using namespace std;
int seq[1000001];
int check[1000001];
int check2[1000001];
int len = 0;

int solve(int i) {
    int left = 0; int right = len - 1;
    int mid;

    int flag = 0;
    cout << "ITS " << seq[i] <<  "   !!!!" << len << "  !!!!!\n";
    while(left <= right) {
        mid = (left + right) / 2;
        cout << mid << " " << left << " " << right << "\n";
        for(int k = 0; k <= len; k++) {
            cout << check[k] << " || ";
        }cout << "\n";
        if(check[mid] < seq[i]) left = mid + 1;
        else if(check[mid] > seq[i]) right = mid - 1;
        else if(check[mid] == seq[i]) {
            cout << "mumchuryo: " << mid << "\n";
            break;
        }
    }

    cout << left << " " << right << " " << mid << " ddddd\n";
    if(left == len) {
        check[len] = seq[i];
        len++;

        return 0;
    }

    if(check[left] > seq[i]) check[left] = seq[i];
}

int main() {
    int n; cin >> n;
    for(int i = 1; i <= n; i++) cin >> seq[i];

    check[0] = -2000000000;
    check[1] = seq[1];
    len = 2;
    for(int i = 2; i <= n; i++) {
        solve(i);
    }

    for(int k = 0; k <= len; k++) {
        cout << check[k] << " || ";
    }cout << "\n";

    cout << len - 1 << endl;

    return 0;
}