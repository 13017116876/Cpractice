#include <stdio.h>

int main(){
    unsigned int a = 60;
    unsigned int b = 15;
    int c = 0;
    c = a & b;
    printf("c��ֵΪ:%d\n",c);
    c = a | b;
    printf("c��ֵΪ:%d\n",c);
    c = a^b;
    printf("c��ֵΪ:%d\n",c);
    c = ~a;
    printf("c��ֵΪ:%d\n",c);
    c = a << 2;     /* 240 = 1111 0000 */
    printf("Line 5 - c ��ֵ�� %d\n", c );
    c = a >> 2;     /* 15 = 0000 1111 */
    printf("Line 6 - c ��ֵ�� %d\n", c );
    }
