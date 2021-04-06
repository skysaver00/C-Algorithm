#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<long long> numbers[40];
queue<long long> bfs;
bool ansFlag = false;

void startBFS(int to, int depth) {
    if(ansFlag) return;

    long long len = numbers[depth].size();

    for(int i = 0; i < len; i++) {
        bfs.push(numbers[depth][i]);
    }

    while(!bfs.empty()) {
        long long num = bfs.front();
        bfs.pop();
        bool powFlag, addFlag;
        powFlag = addFlag = true;

        if(num * 2 > to) powFlag = false;
        if(num * 10 + 1 > to) addFlag = false;

        if(num * 2 == to || (num * 10 + 1) == to) {
            cout << depth + 1 << endl;
            ansFlag = true;
            break;
        }

        if(powFlag) numbers[depth + 1].push_back(num * 2);
        if(addFlag) numbers[depth + 1].push_back(num * 10 + 1);
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    numbers[1].push_back(a);

    for(int i = 1; i <= 39; i++) {
        startBFS(b, i);
        if(ansFlag) break;
    }

    if(!ansFlag) cout << -1 << endl;
    return 0;
}