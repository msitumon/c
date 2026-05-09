#include<stdio.h>
int main(){
    //Find out if a number even or odd.
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0){
        printf("%d is an even number.\n",n);
    }
    else{
        printf("%d is an odd number.\n",n);
    }
return 0;
}