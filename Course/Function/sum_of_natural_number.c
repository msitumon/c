#include<stdio.h>
int SumNatural(int n){
    if(n == 0){
        return 0;
    }
    return n + SumNatural(n - 1);
}
int main(){
    //Recursive sum of natural numbers.
    int n;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    printf("Sum of natural numbers: %d\n",SumNatural(n));
    return 0;
}