#include <stdio.h>
int i;
int j;
int addtwonum();


int main(){
    int result;
    result = addtwonum();
    printf("resultÎª: %d\n",result);
    int t = i + j;
    printf(t);
    //printf("tÖµÎª£º%d",t);
    return 0; 
    
}

int addtwonum(){
    extern int i;
    extern int j;
    i = 1;
    j = 2;
    return i + j;
    }
