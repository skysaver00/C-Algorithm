//190페이지 예제
/*#include <stdio.h> //헤더파일
int main() { //C도 그렇고, JAVA도 그렇지만 main() 함수가 있어야 실행 가능하다.
    int i, j, k; //변수 i, j, k선언. 아직 Null값을 가지고 있다. 마지막은 ;(세미콜론)으로 끝난다.
    scanf("%d %d", &i, &j); //입력을 받게 된다. i, j에 값이 저장된다.
    k = i + j; //k는 i, j를 합친 값.
    printf("%d\n", k); //k를 출력한다.
}*/

//195페이지 1번
//헝가리안 표기법이란 변수의 이름을 지을때 이름에 해당 변수의 자료형을 추가해서 적는 표기법을 뜻한다.

//195페이지 2번
/*#include <stdio.h>
int main() {
    int i = 10, j = 10, k = 30;
    i /= j; //i = 1이된다.
    j -= i; //10 - 1이니까, j = 9가 된다.
    k %= j; //30 % 9는 3, k는 3이 된다.
    printf("%d %d %d\n", i, j, k); //1, 9, 3출력
}*/

//196페이지 4번
/*#include <stdio.h>
int main() {
    int result, a = 100, b = 200, c = 300;
    result = a < b ? b++ : --c; //b++ -> result에 b의 값을 저장, b는 1증가
    //--c -> c는 1감소, result에 c의 값을 저장
    //100 < 200은 참이니까 ?가 실행. result는 200이 된다.
    printf("%d %d %d\n", result, b, c); //200 201 300이 정답. --c는 실행되지 않는다.
}*/

//196페이지 5번
/*#include <stdio.h>
int main() {
    int i, j;
    scanf("%o#%x", &i, &j);//15#22를 입력한다. 15는 8진법, 22는 16진법으로 들어간다.
    printf("%d %d\n", i, j);//8 + 5 -> 13, 2 * 16 + 2 -> 34. 13 34가 출력된다.
}*/

//196페이지 6번
/*#include <stdio.h>
int main() {
    int j = 024, k = 24, L = 0x24, hap; //024 -> 8진법으로 24이다. 0x24 -> 16진법
    hap = j + k + L; //2 * 8 + 4 -> 20, 16 * 2 + 4 -> 36, 20 + 24 + 36;
    printf("%d %d %d %d\n", j, k, L, hap); //20 24 36 80이 출력된다.
}*/

//197페이지 7번
/*#include <stdio.h>
int main() {
    int i = 5, j = 4, k = 1, L, m;
    L = i > 5 || j != 0; //앞에꺼 false, 뒤에꺼 true 0 || 1 -> 1 L = 1;
    m = j <= 4 && k < 1; //앞에꺼 true, 뒤에꺼 false 1 && 0 -> 0 m = 0;
    printf("%d %d\n", L, m); // 1 0출력
}*/

//198페이지 8번
/*#include <stdio.h>
int main() {
    int a = 5, b = 10, c = 15, d = 30, result;
    result = a * 3 + b > d || c - b / a <= d && 1; //뒤에 1은 참이니까 고민 안해도 된다.
    //기억할건 앞에꺼들 a * 3 + b -> 5 * 3 + 10 -> 25 > 30 -> 0
    // c - b / a <= d -> 15 - 10 / 5 -> 13 <= 30 -> 1
    // 0 || 1 && 1; -> true이니까 result = 1
    printf("%d\n", result);
}*/

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

//210페이지 예제
/*#include <stdio.h>
int main() {
    int a = 50; //변수 a에는 50이 저장
    int *b = &a; //변수 b는 a의 주소를 레퍼런스하게 된다.
    //이제 a가 바뀌면 b는 a의 주소의 값을 가져오는 거니까 b도 바뀌는 거다.
    *b = *b + 20; //당연히 b를 가지고 바꿔도 a의 값이 변하게 된다.
    // b가 가지고 있는 주소의 값에 20을 추가
    printf("%d %d\n", a, *b); //70 70출력
    char *s;
    s = "gilbut"; //문자열 s는 gilbut를 뜻한다.
    //s가 gilbut인게 아니다. s가 가진 주소의 값을 보니 gilbut가 있는것.
    for(int i = 0; i < 6; i += 2) {
        printf("%c, ", s[i]); //당연히 문자열이니 이렇게 출력 가능
        //g, l, u를 출력한다.
        printf("%c, ", *(s + i)); //s + 0, s + 2, s + 4가 가르키는 값의 문자를 출력
        //g, l, u를 출력한다.
        printf("%s\n", s + i); //얘는 \0이 나올때까지 출력한다.
        //gilbut, lbut, ut를 출력할 것이다.
        따라서 결과는...
         * g, g, gilbut
         * l, l, lbut
         * u, u, ut
         * 가 될것이다.
    }
}*/

//215페이지 1번
/*#include <stdio.h>
int main() { //염두: %s는 문자열(여러문자가 나오기 가능) %c는 무조건 하나만 출력
    char *p = "KOREA";
    printf("%s\n", p); //p지점에서 \0까지, KOREA 출력
    printf("%s\n", p + 3); //p + 3지점에서 \0까지, EA를 출력한다.
    printf("%c\n", *p); //K 출력
    printf("%c\n", *(p + 3)); //E 출력
    printf("%c\n", *p + 2); //M출력
    printf("%d\n", *p); //아스키코드에서 0 -> 0x30, A -> 0x41, a -> 0x61
    //따라서 K는 11번째 알파벳 이니까, 0x41 + 10 -> 4 * 16 + 1 -> 65 + 10
    //75출력
    printf("%X\n", *p); //얘는 아까 75를 대문자 16진수로 출력하는거니까, 4B를 출력
}*/

//215페이지 2번
/*#include <stdio.h>
int main() {
    char a[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
    //얘 *a = "ABCEDFG"랑 다를거 없다
    char *p;
    p = &a[2]; //p는 C를 가르키게 된다.
    printf("%c %c\n", *p, *(p - 2)); //C A를 출력하게 된다.
}*/

//216페이지 3번
#include <stdio.h>
int main() {
    int a[5], b = 1, sum = 0;
    for(int i = 0; i < 5; i++) {
        a[i] = b; //a[0] = 1, a[1] = 2, a[2] = 4, a[3] = 8, a[4] = 16
        b *= 2; //b = 2, b = 4, b = 6, b = 8, b = 16, b = 32
    }
    for(int i = 0; i < 5; i += 2) {
        sum += *(a + i); //a + 0, a + 2, a + 4 => 1 + 4 + 16
    }
    printf("%d\n", sum); //sum = 1 + 4 + 16 -> 21 21을 출력한다.
}