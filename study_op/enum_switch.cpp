# include <stdio.h>

int main(){
    enum color{red=1,green, blue}favourite_color;
    printf("��������ϲ������ɫ��1.��ɫ��2.��ɫ��3.��ɫ");
    scanf("%d",&favourite_color);
    switch(favourite_color)
    {
      case red:
           printf("����ϲ������ɫ�Ǻ�ɫ");
           break;
      case green:
           printf("����ϲ������ɫ����ɫ");
           break;
      case blue:
           printf("����ϲ������ɫ����ɫ");
           break;
      default:
           printf("û����ϲ������ɫ"); 
           break;
                       }
     return 0;    
    } 
