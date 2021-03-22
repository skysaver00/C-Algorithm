#include <stdio.h>
#include <queue>
#include <math.h>
#include <limits.h>

using namespace std;

void Clear(priority_queue<int> &someQueue) {
    priority_queue<int> empty;
    swap(someQueue, empty);
}

void Clear2(priority_queue<int, vector<int>, greater<int>> &someQueue) {
    priority_queue<int, vector<int>, greater<int>> empty;
    swap(someQueue, empty);
}

int main() {
    int N;
    scanf("%d", &N);

    priority_queue<int> smallHeap;
    priority_queue<int, vector<int>, greater<int>> bigHeap;
    for(int i = 0; i < N; i++) {
        int x;
        scanf("%d", &x);

        if(x == 0) {
            if((abs(bigHeap.top()) < abs(smallHeap.top()) && bigHeap.size() != 0) || smallHeap.size() == 0) {
                if(bigHeap.size() == 0 || bigHeap.empty()) {
                    printf("0\n");
                }
                else {
                    printf("%d\n", bigHeap.top());
                    bigHeap.pop();
                }
            } else {
                if(smallHeap.size() == 0 || smallHeap.empty()) {
                    printf("0\n");
                }
                else {
                    printf("%d\n", smallHeap.top());
                    smallHeap.pop();
                }
            }
            //printf("top: %d %d\n", bigHeap.top(), smallHeap.top());
            //printf("size: %d %d\n", bigHeap.size(), smallHeap.size());
        } else {
            if(x < 0) smallHeap.push(x);
            else bigHeap.push(x);
        }
    }

    return 0;
}