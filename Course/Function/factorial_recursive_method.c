#include<stdio.h>
int Factorial(int n){
    if(n==1){
        return 1;
    }
    return n*Factorial(n-1);
}
int main(){
    //Recursive factorial example.
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial value of %d is %d.\n",n,Factorial(n));
    return 0;
}