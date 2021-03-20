#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1;
    int T;
    scanf("%d", &T);

    while(T--) {
        cin >> str1;

        string mirStr;
        mirStr = str1;

        while(!mirStr.empty()) {
            int where = mirStr.find("10");

            if(where == 0) {
                mirStr.clear();
                mirStr.append(str1, where + 2);

                int flag = 0;
                cout << mirStr;
                while(mirStr.find("0") == 0) {
                    flag = 1;
                    mirStr.clear();
                    mirStr.append(str1, where + 1);
                    cout << mirStr << "\n";
                }
                if(flag == 0) {
                    printf("NO\n");
                    mirStr.clear();
                    str1.clear();
                    break;
                }
                flag = 0;
                while(mirStr.find("1") == 0) {
                    flag = 1;
                    mirStr.clear();
                    mirStr.append(str1, where + 1);
                }
                if(flag == 0) {
                    printf("NO\n");
                    mirStr.clear();
                    str1.clear();
                    break;
                }
                cout << mirStr;
            } else {
                where = mirStr.find("01");
            }
            break;
        }
    }

    return 0;
}