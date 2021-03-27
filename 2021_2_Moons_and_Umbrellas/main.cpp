#include <iostream>
#include <string>

using namespace std;
int cnt = 1;

int main() {
    int t;
    cin >> t;
    string strCJ = "CJ";
    string strJC = "JC";

    while(t--) {
        int x, y;
        string str;

        cin >> x >> y >> str;

        int len = str.length();
        int flag = -1;
        int flag2 = 0;
        int sum = 0;

        for(int i = 0; i < len; i++) {
            if(str.at(i) == '?') flag2++;
            else {
                flag2 = 0;
                break;
            }
        }

        if(flag2 == len || flag == len - 1) {
            cout << "Case #" << cnt << ": " << sum << "\n";
            cnt++;
            continue;
        }
        for(int i = 1; i < len; i++) {
            int cmp1 = 0, cmp2 =0;
            if(str.at(i) == '?') {
                if(str.at(i - 1) != '?' || str.at(i + 1) != '?') {
                    str.at(i) = 'C';

                    string subs = str.substr(i - 1, 2);
                    if(subs.compare(strJC) == 0) {
                        cmp1 = +y;
                    }

                    subs = str.substr(i, 2);
                    if(subs.compare(strCJ) == 0) {
                        cmp1 = +x;
                    }

                    str.at(i) = 'J';

                    subs = str.substr(i - 1, 2);
                    if(subs.compare(strCJ) == 0) {
                        cmp2 = +x;
                    }

                    subs = str.substr(i, 2);
                    if(subs.compare(strCJ) == 0) {
                        cmp2 = +y;
                    }

                    if(cmp1 > cmp2) {
                        str.at(i) = 'J';

                        if(flag != -1) {
                            for(int j = 0; j <= flag; j++) {
                                if(str.at(j) == '?') str.at(j) = 'J';
                            }
                        }
                    } else {
                        str.at(i) = 'C';

                        if(flag != -1) {
                            for(int j = 0; j <= flag; j++) {
                                if(str.at(j) == '?') str.at(j) = 'C';
                            }
                        }
                    }

                } else {
                    flag = i;
                }
            }
        }

        if(str.at(0) == '?') str.at(0) = str.at(1);

        for(int i = 0; i < len - 1; i++) {
            string subs = str.substr(i, 2);
            if(subs.compare(strJC) == 0) {
                sum += y;
            }
            if(subs.compare(strCJ) == 0) {
                sum += x;
            }
        }
        cout << "Case #" << cnt << ": " << sum << "\n";
        cnt++;
    }
}