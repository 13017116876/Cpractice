#include <stdio.h>

int main(){
    char grade = 'g';
    switch(grade)
    {
     case 'A':
          printf("很棒!");
          break;
     case 'B':
     case 'C':
          printf("做得好\n"); /* 如果是B或C，打印做得好  */ 
          break;
     default:
             printf("无效的成绩\n"); 
     }
             printf("你的成绩是%c\n",grade);            
    return 0;
    }
