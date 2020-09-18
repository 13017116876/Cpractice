#include <stdio.h>
int main(){
    int a = 4;
    short b;
    double c;
    int* ptr;
    printf("line1:变量a的大小为%lu\n",sizeof(a));
    printf("line2:变量b的大小为%lu\n",sizeof(b));
    printf("line3:变量c的大小为%lu\n",sizeof(c));
    ptr = &a;
    printf("a的地址为：%d\n",ptr);
    printf("*ptr值为：%d\n",*ptr); 
    a = 10;
    b = (a == 1)? 20:30;
    printf("b的值为%d\n",b);
    b = (a == 10)? 20:30;     
    printf("b的值为%d",b);                  
    }
