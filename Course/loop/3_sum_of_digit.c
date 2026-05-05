#include<stdio.h>
int main(){
    //Calculate the sum of digits.
    int n,sum=0;
    printf("Enter a five digit number: ");
    scanf("%d",&n);
    for(int i=0; i<5; i++){
        int x=n%10;
        sum+=x;
        n=n/10;
    }
    printf("Sum of digit: %d\n",sum);
return 0;
}