#include <iostream>
#include <vector>
using namespace std;

vector<int> vec;

void conquer(int start, int mid, int end) {
    vector<int> temp;
    int i = start, j = mid + 1;

    while(i <= mid && j <= end) {
        if(vec[i] <= vec[j]) {
            temp.push_back(vec[i]);
            i++;
        } else {
            temp.push_back(vec[j]);
            j++;
        }
    }

    while(i <= mid) {
        temp.push_back(vec[i]);
        i++;
    }

    while(j <= end) {
        temp.push_back(vec[j]);
        j++;
    }

    for(i = start; i <= end; i++)
        vec[i] = temp[i - start];
}

void divide(int start, int end) {
    if(start < end) {
        int mid = (start + end) / 2;
        divide(start, mid);
        divide(mid + 1, end);
        conquer(start, mid, end);
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int val; cin >> val;
        vec.push_back(val);
    }

    divide(0, n - 1);
    cout << vec[k - 1] << "\n";
}