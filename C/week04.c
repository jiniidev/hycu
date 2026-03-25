#include <stdio.h>

int main() {
    printf("안녕하세요. \n");
    printf("방가방가\n");

    int grade = 3;
    char Letter = 'Y'; // 문자형
    double cost = 34.567; // 실수형
    
    printf("\n");
    printf("구구단은 %d학년 때 배워요. \n", grade);
    printf("좋아하는 알파벳은 %c입니다. \n", Letter);
    
    int num = 5;

    if(num == 10) {
        printf("당첨입니다.\n");
        printf("10입니다.\n");
    } else {
        printf("꽝입니다.\n");
    }

    int score = 96;

    if(score >= 95) {
        printf("A+입니다.\n");
    }

    return 0;
}