#include<stdio.h>
int main(){
    //Fibonacci series up to a certain number.
    int a=0,b=1,x,next;
    printf("Enter maximum fibonacci number: ");
    scanf("%d",&x);
    for( ; ; ){
        if(a==x || a>x){
            break;
        }
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }
return 0;
}