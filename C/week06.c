#include <stdio.h>
#include <stdlib.h>

int main() {
    // 10진수를 8진수로 출력
    printf("%o\n", 156);
    printf("%o\n", 0xA4D);

    // 10진수를 16진수로 출력
    printf("%X %x\n", 235, 235);

    // scanf() 함수 출력
    int n;

    printf("점수를 입력하세요.\n");
    scanf("%d", &n);
    printf("당신의 점수는 %d입니다.\n", n);
    printf("당신의 16진수 주소는 %X입니다.\n", &n);

    // 산술연산자
    int a = 10, b = 3;

    printf("%d\n", a + b);
    printf("%d\n", a - b);
    printf("%d\n", a * b);
    printf("%d\n", a / b);
    printf("%d\n", a % b);
    
    double c = 10.0, d = 3.0;
    double e = a / b;

    printf("c=%5.2f, d=%5.2f, e=%5.2f\n", c, d, e);

    // 증감연산자
    int r = 0;
    r = a++;

    printf("r=%d, a=%d\n", r, a);

    return 0;
}