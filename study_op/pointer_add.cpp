#include <stdio.h>

const int MAX = 3;
 int main(){
     int var[] = {10,20,30};
     int i, *ptr;
     for (i = 1;i< MAX;i++){
         printf("�洢��ַ��var[%d] = %x\n", i, ptr );
         printf("ֵ��var[%d] = %x\n", i, *ptr );
         ptr++; 
         } 
     
     }
