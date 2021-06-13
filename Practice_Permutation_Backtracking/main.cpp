#include <iostream>
using namespace std;
int number[50];
int res[50];
bool visit[50];

bool is_goodPermutation(int cnt){
    int len = cnt;

    for(int i=1; i<=len/2; i++){
        string s1 = "";
        string s2 = "";

        for(int j=0; j<i; j++){
            s1 += to_string(res[len - (2*i) + j]);
            s2 += to_string(res[len - i + j]);
            //cout << s1 << " " << s2 << "\n";
        }
        if(s1 == s2) return false;
    }
    return true;
}

void dfs(int cnt, int max, int size, int level) {
    if(cnt == max) {
        for(int i = 0; i < max - 1; i++) {
            if(res[i] == res[i + 1]) return;
        }
        for(int i = 0; i < max; i++) cout << res[i];
        cout << "\n";
        level--;
        exit(0);
    }

    for(int i = 0; i < size; i++) {
        //if(visit[i]) continue;
        res[cnt] = number[i];
        //visit[i] = true;
        bool ck = is_goodPermutation(cnt);
        if(ck) dfs(cnt + 1, max, size, level + 1);
        //visit[i] = false;
    }
}

int main() {
    int n, m; cin >> n >> m;

    for(int i = 0; i < n; i++) number[i] = i + 1;
    dfs(0, m, n, 0);
    return 0;
}