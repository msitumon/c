#include<stdio.h>
int main(){
    int i,a,b,sum=0;
    printf("Enter the starting and ending numbers: ");
    scanf("%d %d",&a,&b);
    for(i=a; i<=b; i++){
        sum+=i;
    }
    printf("The sum of numbers from %d to %d: %d\n",a,b,sum);
return 0;
}