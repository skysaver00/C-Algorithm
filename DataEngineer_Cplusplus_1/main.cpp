//190페이지 예제
#include <stdio.h> //헤더파일
int main() { //C도 그렇고, JAVA도 그렇지만 main() 함수가 있어야 실행 가능하다.
    int i, j, k; //변수 i, j, k선언. 아직 Null값을 가지고 있다. 마지막은 ;(세미콜론)으로 끝난다.
    scanf("%d %d", &i, &j); //입력을 받게 된다. i, j에 값이 저장된다.
    k = i + j; //k는 i, j를 합친 값.
    printf("%d\n", k); //k를 출력한다.
}
//206페이지 5번
/*#include <stdio.h>
int main() {
    int c = 1;
    switch(3) {
        case 1: c += 3;
        case 2: c++; //실행 X
        case 3: c = 0; //1 -> 0
        case 4: c += 3; //0 -> 3
        case 5: c -= 10; //3 -> -7
        default: c--; //-7 -> -8
    }
    printf("%d", c); //-8출력
}*/

//206페이지 6번
/*#include <stdio.h>
int main() {
    int a = 3, b = 10;
    if(b > 5) //실행
        printf("%x\n", a + b); //13이고, %x니까,a = 10 -> d를 출력
    else //실행 X
        printf("%x\n", b - a);

    printf("%X\n", a + b); //대문자 X이니까, 대문자 D를 출력할 것 이다.
}*/

//207페이지 7번
/*#include <stdio.h>
int main() {
    int n = 0, t = 0;
    do { //일단 do를 한번 실행한다.
        t += n; //연산: 0 0, 1 1, 2 3, 3 6, ...
        printf("%d %d\n", n++, t); //출력: 0 0, 1 1, 2 3, 3 6, ... 9 45찍고 while탈출 n == 10이니까,
    } while(n < 10); //그다음 while에 합당하면, 다시 do 실행. while이 틀릴때까지 실행.
} //따라서 마지막 출력은 9 45 */

//207페이지 8번
/*#include <stdio.h>
int main(void) {
    int i, j, n;
    n = 7;
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++)
            printf("%3d", j);
        printf("\n");
    }
}*/

//208페이지 9번
/*#include <stdio.h>
int main() {
    int i = 10, hap = 0;
    while(i > 1) {
        i--; //9, 8, 7, 6 ...... 2, 1까지. 1가능하다. 나중에 막힘.
        if(i % 3 == 1) //7, 4, 1일때 hap -> 0 -> 7 -> 11 -> 12
            hap += i;
    }
    printf("%d\n", hap); //12출력
}*/

//209페이지 11번
/*#include <stdio.h>
int main() {
    int i, a[5], cnt = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 5; i++) {
        if(a[i] % 2 != 0) //홀수의 개수를 세는 거니까 !=가 들어가면 된다.
            cnt = cnt + 1;
    }

    printf("odd: %d\n", cnt);
}*/