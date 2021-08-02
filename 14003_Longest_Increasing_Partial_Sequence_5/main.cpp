#include <iostream>
using namespace std;

int arr[1000001];
int check[1000001];
int check2[1000001];
int ans[1000001];
int v[1000001];
int len = 0;
int n;

int solve(int i) {
    int left = 0; int right = len - 1;
    int mid;

    int flag = 0;
    while(left <= right) {
        mid = (left + right) / 2;
        if(check[mid] < arr[i]) left = mid + 1;
        else if(check[mid] > arr[i]) right = mid - 1;
        else if(check[mid] == arr[i]) {
        }
    }

    cout << left << " " << mid << " " << right << " " << len << "\n";

    if(left == len) {
        check2[len] = check2[len - 1] + 1;
        v[i] = mid;
        check[len] = arr[i];
        len++;
    }
    else if(check[left] > arr[i]) {
        check2[i] = check[left - 1] + 1;
        v[i] = mid;
        check[left] = arr[i];
    }

    for(int k = 0; k <= n; k++) {
        cout << check[k] << " || ";
    }cout << "\n";

    for(int k = 0; k <= n; k++) {
        cout << check2[k] << " || ";
    }cout << "\n";

    for(int k = 0; k <= n; k++) {
        cout << v[k] << " || ";
    }cout << "\n";

    return 0;
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        check2[i] = 1;
    }

    check[0] = -2000000000;
    check[1] = arr[1];
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