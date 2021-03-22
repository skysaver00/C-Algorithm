#include<stdio.h>
#include <queue>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);

    priority_queue<int> bigHeap;
    priority_queue<int, vector<int>, greater<int>> smallHeap;

    int median;

    bigHeap.push(-99999999);
    smallHeap.push(99999999);
    for(int i = 0; i < N; i++) {
        int number;
        scanf("%d", &number);

        if(i == 0) median = number;

        if(i != 0) {
            if (median >= number) bigHeap.push(number);
            else smallHeap.push(number);
        }
        if(i % 2 == 0 && i != 0) {

            if(bigHeap.size() < smallHeap.size()) {
                bigHeap.push(median);
                median = smallHeap.top();
                smallHeap.pop();
            } else if(bigHeap.size() > smallHeap.size()) {
                smallHeap.push(median);
                median = bigHeap.top();
                bigHeap.pop();
            } else {

            }
        } else if(i % 2 != 0) {
            if(bigHeap.size() > smallHeap.size()) {
                if(bigHeap.top() < median) {
                    smallHeap.push(median);
                    median = bigHeap.top();
                    bigHeap.pop();
                }
            }
        }
        printf("%d\n", median);
    }
    return 0;
}