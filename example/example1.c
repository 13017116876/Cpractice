//this is an example of acquiring all unrepeat three digit numbers from four numbers
#include<stdio.h>
int i;
int j;
int k;
int main(){
    int a[4] = {1,2,3,4};
    for(i=0;i<4;i++){
       for(j=0;j<4;j++){
           if (j==i){
               continue;
                     }
           for(k=0;k<4;k++){
               if(k==i||k==j){
                   continue;
                              }   
               printf("ֵΪ%d",a[i]*100 + a[j]*10 + a[k]);  
               printf("\n");        
                            }
                       
                        }              
                     }
    }
