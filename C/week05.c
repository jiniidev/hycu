#include <stdio.h>
#include <stdlib.h>

int main() {
    // 서식 문자 %d, %g, %c
    printf("Hello!");
    printf("He\nll\no!");
    printf("Hello!");

    printf("100\n!");
    printf("5.5\n!");
    printf("%d\n", 100);
    printf("%g\n", 5.5);
    printf("%d g\n", 100, 5.5);

    int a;
    a = 50;
    int b = 100;

    printf("%d\n", a);
    printf("%d\n", b);

    // 변수와 메모리 이해
    char c = 'A';
    printf("%d\n", sizeof(c));

    // a와 b 데이터 바꾸기
    int t = a;
    a = b;
    b = t;

    printf("%d %d\n", a, b);

    printf("%d %c\n", 65, 65);
    printf("%d %c\n", 'A', 'A');

    return 0;
}