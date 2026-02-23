// task: take a  number of four digit and inverse it
#include<stdio.h>
int main(){
    int x,a,b,c,d,inverse;
    printf("Enter a number: ");
    scanf("%d",&x);
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    c=x%10;
    x=x/10;
    d=x%10;
    inverse=a*1000+b*100+c*10+d;
    printf("Inverse number of x is %d\n",inverse);

}