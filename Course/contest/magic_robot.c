#include<stdio.h>
int main(){
    //The Magic Robot
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum=a+b;
    if(sum%2==0){
        printf("BYE\n");
    }
    else{
        printf("HELLO\n");
    }
    return 0;
}