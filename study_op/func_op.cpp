#include <stdio.h>
int max(int num1,int num2);
int main(){
    int a = 10;
    int b = 20;
    int ret;
    ret = max(a,b);
    printf("max value is %d", ret);
    return 0; 
    
    
    }

int max(int num1, int num2){
    int result;
    if(num1>num2){
        result = num1;          
                  }
    else{
         result = num2;
         }
    return result;
    }
