#include<stdio.h>
int main(){
    //Obtain the reversed number.
    int i,n,x,sum=0;
    printf("Enter a five digit number: ");
    scanf("%d",&n);
    int m=n;
    for(i=0; i<5; i++){
        x=n%10;
        sum*=10;
        sum+=x;
        n/=10;
    }
    printf("Reversed number: %d\n",sum);
    if(sum==m){
        printf("The reversed number and the input number are equal\n");
    }
    else{
        printf("The reversed number and the input number are not equal.\n");
    }
return 0;
}