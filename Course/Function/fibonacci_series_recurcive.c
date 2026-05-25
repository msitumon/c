#include<stdio.h>
int FibonacciSeries(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return FibonacciSeries(n-1)+FibonacciSeries(n-2);
    }
}
int main(){
    //Fibonacci series using recursive method.
    int i,n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("The fibonacci series: ");
    for(i=0; i<n; i++){
        printf("%d ",FibonacciSeries(i));
    }
    printf("\n");
    return 0;
}