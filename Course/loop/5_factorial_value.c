#include<stdio.h>
int main(){
    //Find the factorial value of a number.
    int i,n,fac=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n; i>=1; i--){
        fac*=i;
    }
    printf("The factorial value of %d is %d\n",n,fac);
return 0;
}