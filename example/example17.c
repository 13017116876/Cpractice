// input a serise of string and static latin character、space number and other character 
# include<stdio.h>
int main(){
    int alpha=0,num=0,space=0,other=0;
    char c;
    int i;
    printf("please input str:");
    while((c=getchar()) != '\n')
    {
     if ((c>='a' && c<='z') || (c>='A' && c<='Z')){
                 alpha++;
                 }
     else if(c>='0' && c<='9')
          num++;
     else if(c==' ')
            space++;
        else
            other++;
                        }
     printf("字母=%d,数字=%d,空格=%d,其他=%d\n",alpha,num,space, other);
     return 0;
     }

