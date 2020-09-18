#include <stdio.h>
#include <float.h>
 int main(){
     printf("float 存储大小为 %lu\n",sizeof(float)); 
     printf("float最小值%E\n",FLT_MIN);
     printf("float最大值%E\n",FLT_MAX); 
     printf("精度值： %d\n", FLT_DIG); 
     return 0;
     } 
