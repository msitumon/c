#include<stdio.h>
int main(){
    int x,sum=0;
    printf("Enter a number: ");
    scanf("%d",&x);
    while(x!=0){
        sum=sum*10+x%10;
        x=x/10;
    }
    printf("The calculate number is %d\n",sum);
return 0;
}