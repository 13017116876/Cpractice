// printf narcissus number
int main(){
    int i,j,x,y,z;
    for(i=100;i<=999;i++){
        x = i/100;
        y = (i%100)/10;
        z = i%10;
        if(x*x*x+y*y*y+z*z*z == i){
                             printf("%d是水仙花数\n",i); 
                             
                             }
        
                          }
    }
