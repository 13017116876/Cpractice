// transform score to rank by contition operation signal
#include <stdio.h>

int main(){
    int score;
    char grade;
    printf("please input your score:");
    scanf("%d", &score);
    grade = (score>=90)?'A':((score>=60)?'B':'C'); // mind double quote will be error
    printf("%c",grade);
    }
