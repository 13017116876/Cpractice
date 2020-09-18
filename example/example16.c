// input two integer numbers,solve thier greatest common divisor and Least common multiple
#include <stdio.h>
int main(){
    int i,j,max_divisor,a,b,min_multiple;
    printf("please input two numbers:");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a/2;i++){
        if(a%i == 0 && b%i == 0){
               max_divisor = i;
               }              
        }
    printf("最大公约数为 %d\n",max_divisor);
    
    for(j=a;j<=a*b;j++){
        if(j%a==0 && j%b==0){
                  min_multiple = j;
                  break;
                  }     
                   
        }
    printf("最小公倍数为%d",min_multiple);
    
     
    }
