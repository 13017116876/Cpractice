# include <stdio.h>

int main(){
    enum color{red=1,green, blue}favourite_color;
    printf("请输入你喜欢的颜色：1.红色，2.绿色，3.蓝色");
    scanf("%d",&favourite_color);
    switch(favourite_color)
    {
      case red:
           printf("你最喜欢的颜色是红色");
           break;
      case green:
           printf("你最喜欢的颜色是绿色");
           break;
      case blue:
           printf("你最喜欢的颜色是蓝色");
           break;
      default:
           printf("没有你喜欢的颜色"); 
           break;
                       }
     return 0;    
    } 
