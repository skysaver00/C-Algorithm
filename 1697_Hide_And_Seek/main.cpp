#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

vector<int> vec[2000];
queue<int> bfs;
int check[100001];
bool realFlag = false;

void startBFS(int to, int depth) {
    if(realFlag) return;
    int len = vec[depth].size();
    for(int i = 0; i < len; i++) {
        bfs.push(vec[depth][i]);
    }

    while(!bfs.empty()) {
        int num = bfs.front();
        if(num == to) {
            cout << "ans " << depth << endl;
            realFlag = true;
            break;
        }

        bfs.pop();
        bool minFlag, addFlag, mulFlag;
        minFlag = addFlag = mulFlag = true;

        if(check[num - 1] < depth || num - 1 < 0) minFlag = false;
        if(check[num + 1] < depth || num + 1 > 100000) addFlag = false;
        if(check[num * 2] < depth || num * 2 > 100000) mulFlag = false;

        if(minFlag) {
            check[num - 1] = depth + 1;
            vec[depth + 1].push_back(num - 1);
        }
        if(addFlag) {
            check[num + 1] = depth + 1;
            vec[depth + 1].push_back(num + 1);
        }
        if(mulFlag) {
            check[num * 2] = depth + 1;
            vec[depth + 1].push_back(num * 2);
        }
    }
}

int main() {
    memset(check, 999999, sizeof(int) * 100000);
    int n, k;
    cin >> n >> k;
    vec[0].push_back(n);
    check[n] = 0;

    for(int i = 0; i < 50000; i++) {
        startBFS(k, i);
        if(realFlag) break;
    }

    return 0;
}