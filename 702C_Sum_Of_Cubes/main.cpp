#include <iostream>

using namespace std;

long long arr[10001];
long long x;
long long sub;

bool binary_check(int left, int right) {
    if(left > right) {
        return false;
    }

    int mid = (left + right) / 2;
    if(sub > arr[mid]) {
        left = mid + 1;
        binary_check(left, right);
    } else if(sub < arr[mid]) {
        right = mid - 1;
        binary_check(left, right);
    } else if(sub == arr[mid] && arr[mid] != 0){
        return true;
    }
}

int main() {
    int t;
    cin >> t;

    for(long long i = 1; i <= 10000; i++) {
        arr[i] = i * i * i;
    }

    while(t--) {
        cin >> x;
        bool flag = false;

        for(int i = 1; i <= 10000; i++) {
            sub = x - arr[i];
            if(sub <= 0) break;

            bool check = binary_check(0, 10000);
            if(check) {
                printf("YES\n");
                flag = true;
                break;
            }
        }
        if(!flag) printf("NO\n");
    }

    return 0;
}