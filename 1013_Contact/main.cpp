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
                str1.clear();
                str1.append(mirStr);

                int flag = 0;
                cout << mirStr << "\n";
                while(mirStr.find("0") == 0) {
                    flag = 1;
                    mirStr.clear();
                    mirStr.append(str1, where + 1);
                    str1.clear();
                    str1.append(mirStr);
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
                    str1.clear();
                    str1.append(mirStr);
                }
                if(flag == 0) {
                    printf("NO\n");
                    mirStr.clear();
                    str1.clear();
                    break;
                }
                cout << mirStr << "\n";
            }

            where = mirStr.find("01");

            if(where == 0) {
                mirStr.clear();
                mirStr.append(str1, where + 2);
                str1.clear();
                str1.append(mirStr);

                cout << mirStr << "\n";
            }

            if(mirStr.empty() == true) {
                printf("YES\n");
                break;
            } else if(mirStr.find("01") == -1 && mirStr.find("10") == -1) {
                printf("NO\n");
                break;
            }
        }
    }

    return 0;
}