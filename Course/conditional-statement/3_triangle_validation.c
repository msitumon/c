#include<stdio.h>
int main(){
    //A triangle is valid or not.
    int a,b,c;
    printf("Enter three angle of a triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180){
        printf("The triangle is valid.\n");
    }
    else{
        printf("The triangle is not valid.\n");
    }
return 0;
}