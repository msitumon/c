#include<stdio.h>
int main(){
    int x,sum=0;
    printf("Enter the code number: ");
    scanf("%d",&x);
    while(x!=0){
        sum=sum+x%10;
        x=x/10;
    }
    printf("Sum of Digits = %d\n",sum);
return 0;
}