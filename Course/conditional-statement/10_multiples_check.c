#include<stdio.h>
int main(){
    //Chack Multiples.
    printf("Enter two number: ");
    int a,b;
    scanf("%d %d",&a,&b);
    if (b%a==0 || a%b==0){
        printf("Are multiples\n");
    }
    else {
        printf("Aren't multiples\n");
    }
return 0;
}