#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("After swapping\na = %d \nb = %d\n",a,b);
    return 0;
}