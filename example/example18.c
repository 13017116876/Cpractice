// 
# include <stdio.h>
//# include <math.h>
int cal_pow(int x, int y);
int main(){
    int a,f,n,i;
    printf("please input a and n:");
    scanf("%d%d",&a,&n);
    int sum=0;
    int va = 0;
    for(i=0;i<n;i++){
        int result = cal_pow(10,i);
        //printf("result:%d\n",result);
        //printf("cifang:%f\n",int pow(10,i)); 
        //printf("va:%d\n",va);
        va += a*result;
        sum = sum +  va; 
        printf("%d\n",va);
                      }
    printf("result=%d",sum);
    }

int cal_pow(int x, int y){
    int j;
    int result = 1; 
    if (y==0){
        return 1;
        }
    for(j=0;j<y;j++){
        result = result * x;
                      }
    return result;
    }
