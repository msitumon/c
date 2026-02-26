#include<stdio.h>
int main(){
    int i,a,b,sum1=0,sum2=0;
    printf("Enter the starting and ending number: ");
    scanf("%d %d",&a,&b);
    for(i=a; i<=b; i++){
        if(i%2==0){
            sum1+=i;
        }
        else{
            sum2+=i;
        }
    }
    printf("The sum of Even Numbers: %d\n",sum1);
    printf("The sum of Odd Numbers: %d\n",sum2);
    return 0;
}