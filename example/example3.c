// a interger add one hundred is a perfect square and add 168 again still
#include<stdio.h>
#include <stdbool.h>
#define true 1
#define false 0

bool IsSquare(int num);
int main(){
    int j;
    for(j=(-100);j<2000;j++){  //�������j���Ҹ��ݴ����õģ�Ҫ�Լ�����һ������ʱ���Ƕ��� 
        if(IsSquare(j+100)&&IsSquare(j+268)){
            printf("%d��������",j);
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
    

