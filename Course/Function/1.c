#include<stdio.h>
int Fibonacci(int n){
    int a=0,b=1,i,next;
    for(i=0; i<n; i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }
    return 0;
}
int main(){
    //Calculate fibonacci series using user defined function.
    int x;
    printf("Enter last number position: ");
    scanf("%d",&x);
    Fibonacci(x);
return 0;
}