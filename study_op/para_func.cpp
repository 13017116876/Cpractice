#include <stdio.h>
void swap(int x, int y);

int main(){
    int a = 100;
    int b = 200;
    printf("����ǰ��a��ֵΪ%d\n",a);
    printf("����ǰ��b��ֵΪ%d\n",b);
    swap(a, b);
    printf("�������a��ֵΪ%d\n",a);
    printf("�������b��ֵΪ%d\n",b);
    return 0; 
    }
    
void swap(int x, int y){
     int temp;
     temp = x;
     x = y;
     y = temp;
     return;
     }
