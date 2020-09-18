// input three interger num,and output sort sequence low->high
# include<stdio.h>
int x1,x2,x3,t;
int main(){
    printf("please input three num:");
    scanf("%d,%d,%d",&x1,&x2,&x3);
    if(x1>x2){
        t = x2;
        x2 = x1;
        x1 = t;
              }
    if(x1>x3){
        t = x3;
        x3 = x1;
        x1 = t;
              }
    if(x2>x3){
      t = x3;
      x3 = x2;
      x2 = t;
              }
    printf("low->high is %d,%d,%d",x1,x2,x3); 
    } 
