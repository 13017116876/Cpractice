// a interger add one hundred is a perfect square and add 168 again still
#include<stdio.h>
#include <stdbool.h>
#define true 1
#define false 0

bool IsSquare(int num);
int main(){
    int j;
    for(j=(-100);j<2000;j++){  //这里这个j是我根据答案设置的，要自己计算一下最大的时候是多少 
        if(IsSquare(j+100)&&IsSquare(j+268)){
            printf("%d满足条件",j);
            printf("\n");
                                             }
        }
    }
    
bool IsSquare(int num){
     int i;
     for(i=1;num>0;i+=2){
             num = num - i;
             }
     if(num==0){
         return true;
                }
     else{
          return false;
          }
     } 
    

