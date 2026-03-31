#include<stdio.h>
void prime(int n){
    int i, flag=1;
    for(i=2; i<=n/2; i++){
        if(n%2==0){
            flag=0;
            break;
        }
    }
    if(flag){
        printf("Prime number.\n");
    }
    else{
        printf("Not a prime number.\n");
    }
}
int main(){
    int n,flag;
    printf("Enter n: ");
    scanf("%d",&n);
    prime(n);
return 0;
}