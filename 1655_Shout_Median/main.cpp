#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N;
    cin >> N;

    priority_queue<int> bigHeap;
    priority_queue<int, vector<int>, greater<int>> smallHeap;

    int median;
    for(int i = 0; i < N; i++) {
        int number;
        cin >> number;

        if(i == 0) median = number;

        cout << median << "\n";

        if(median >= number) bigHeap.push(number);
        else smallHeap.push(number);
        if(i % 2 == 0) {
            cout << smallHeap.size() << " " << bigHeap.size() << "\n";
            if(bigHeap.size() <= smallHeap.size()) {
                bigHeap.push(median);
                median = bigHeap.top();
                bigHeap.pop();
            } else {
                smallHeap.push(median);
                median = smallHeap.top();
                smallHeap.pop();
            }

            cout << smallHeap.top() << " " << bigHeap.top() << "\n";
        }
    }
}