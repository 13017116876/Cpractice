#include <stdio.h>
int main(){
    int a = 4;
    short b;
    double c;
    int* ptr;
    printf("line1:����a�Ĵ�СΪ%lu\n",sizeof(a));
    printf("line2:����b�Ĵ�СΪ%lu\n",sizeof(b));
    printf("line3:����c�Ĵ�СΪ%lu\n",sizeof(c));
    ptr = &a;
    printf("a�ĵ�ַΪ��%d\n",ptr);
    printf("*ptrֵΪ��%d\n",*ptr); 
    a = 10;
    b = (a == 1)? 20:30;
    printf("b��ֵΪ%d\n",b);
    b = (a == 10)? 20:30;     
    printf("b��ֵΪ%d",b);                  
    }
