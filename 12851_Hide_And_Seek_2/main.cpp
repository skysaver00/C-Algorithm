#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

vector<long long> vec[100006];
queue<int> bfs;
int check[100006];
int cnt = 0;
bool realFlag = false;

void startBFS(int to, int depth) {
    if(realFlag) return;
    int len = vec[depth].size();
    for(int i = 0; i < len; i++) {
        bfs.push(vec[depth][i]);
    }
    //cout << len << " " << depth << "\n";

    while(!bfs.empty()) {
        int num = bfs.front();
        //cout << num << " " << depth << " " << cnt << endl;
        if(num == to) {
            if(!realFlag) cout << depth << endl;
            realFlag = true;
            cnt++;
            //break;
        }

        bfs.pop();
        bool minFlag, addFlag, mulFlag;
        minFlag = addFlag = mulFlag = true;

        if(check[num - 1] <= depth || num - 1 < 0) minFlag = false;
        if(num + 1 > 100000 || check[num + 1] <= depth || num > to) addFlag = false;
        if(num * 2 > 100000 || check[num * 2] <= depth || num > to) mulFlag = false;

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
    for(int i = 0; i <= 100000; i++) {
        check[i] = 999999;
    }

    int n, k;
    cin >> n >> k;
    vec[0].push_back(n);
    check[n] = 0;

    for(int i = 0; i <= 100000; i++) {
        startBFS(k, i);
        if(realFlag) break;
    } cout << cnt << endl;

    return 0;
}