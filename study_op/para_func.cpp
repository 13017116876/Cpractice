#include <stdio.h>
void swap(int x, int y);

int main(){
    int a = 100;
    int b = 200;
    printf("交换前的a的值为%d\n",a);
    printf("交换前的b的值为%d\n",b);
    swap(a, b);
    printf("交换后的a的值为%d\n",a);
    printf("交换后的b的值为%d\n",b);
    return 0; 
    }
    
void swap(int x, int y){
     int temp;
     temp = x;
     x = y;
     y = temp;
     return;
     }
