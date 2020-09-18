// Decompose positive integers into prime factors

int main(){
    int num;
    printf("please input a integer:");
    scanf("%d", &num);
    printf("%d=",num);
    min_prime_factor(num);
    }
    
int min_prime_factor(int n){
    int i;
    for(i=2;i<n;i++){
        if (n%i == 0){
             printf("%d",i);
             printf("*");
             min_prime_factor(n/i);
             return 0; 
                }
                     }
    printf("%d",n);
    
    } 
