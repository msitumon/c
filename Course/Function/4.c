#include<stdio.h>
int Factorial(int n){
    int i,mul=1;
    for(i=n; i>=1; i--){
        mul*=i;
    }
    return mul;
}
int main(){
    //Calculate factorial of a number.
    int x,fac;
    printf("Enter a number: ");
    scanf("%d",&x);
    fac=Factorial(x);
    printf("The factorial value: %d\n",fac);
return 0;
}