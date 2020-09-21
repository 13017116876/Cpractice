// 一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

# include<stdio.h>
int main(){
double height = 100;
int i;
double bonus;
double total=0;
for(i=1;i<=10;i++){
	height = height/2;
	total = total+height+height;	
}
printf("总经过%f米",total+100-2*height);

printf("第十次返回%f米", height);
}
