#include <stdio.h>

const int MAX = 3;
 int main(){
     int var[] = {10,20,30};
     int i, *ptr;
     for (i = 1;i< MAX;i++){
         printf("´æ´¢µØÖ·£ºvar[%d] = %x\n", i, ptr );
         printf("Öµ£ºvar[%d] = %x\n", i, *ptr );
         ptr++; 
         } 
     
     }
