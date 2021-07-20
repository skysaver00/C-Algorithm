#include <iostream>
#include <deque>
using namespace std;
deque<int> deq;
deque<int> deq2;
int arr[51];

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> arr[i];
        deq.push_back(i);
    }

    deq2 = deq;

    int start = 1, now = n;
    int ans = 0;
    for(int i = 0; i < m; i++) {
        int find = arr[i];

        int count = 0;
        while(1) {
            if(deq.front() == find) {
                ans += count;
                break;
            } else if(deq2.front() == find) {
                ans += count;
                break;
            }

            int val = deq.front();
            deq.pop_front();
            deq.push_back(val);

            val = deq2.back();
            deq2.pop_back();
            deq2.push_front(val);

            count++;
        }
    }

    return 0;
}
