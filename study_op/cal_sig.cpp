#include <stdio.h>
 int main(){
     int a = 10;
     int b = 20;
     int c;
     c = a + b;
     printf("line1:c的值为%d:\n",c);
     c = a - b;
     printf("line2:c的值为%d:\n",c);
     c = a * b;
     printf("line3:c的值为%d:\n",c);
     c = a / b;
     printf("line4:c的值为%d:\n",c);
     c = a % b;
     printf("line5:c的值为%d:\n",c);
     c = a++;
     printf("line6:c的值为%d:\n",c);
     c = ++a;
     printf("line7:c的值为%d:\n",c);
     } 
