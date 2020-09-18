// judge prime number between 101 and 200
#include <stdio.h>
int main(){
    int i,j;
    for(i=101;i<=200;i++){
        for(j=2;j<i;j++){
            if(j*j>101){
                printf("%dÊÇËØÊı",i); 
                printf("\n");
                break;
                        }
            else if(i%j==0){
                 break;
                 }
            
                         }
                          }
    } 
