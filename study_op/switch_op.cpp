#include <stdio.h>

int main(){
    char grade = 'g';
    switch(grade)
    {
     case 'A':
          printf("�ܰ�!");
          break;
     case 'B':
     case 'C':
          printf("���ú�\n"); /* �����B��C����ӡ���ú�  */ 
          break;
     default:
             printf("��Ч�ĳɼ�\n"); 
     }
             printf("��ĳɼ���%c\n",grade);            
    return 0;
    }
