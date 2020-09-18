#include <stdio.h>

int main(){    
    printf("\\"); 
    printf("\b");
    printf("nihao");
    printf("\a");
    // \r回到本行的开头 会覆盖之前写的 
    //printf("\r"); 
    printf("ll"); 
    printf("\t");
    printf("\f");
    printf("\"");
    printf("\v"); 
    printf("\n");
    return 0;
    }
    
