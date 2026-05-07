#include<stdio.h>
int main(){
    //Check the number prime or not.
    int i,n,x=0;
    printf("Enter total number of input: ");
    scanf("%d",&n);
    int prime[n];
    for(i=0; i<n; i++){
        printf("Enter the %d no input: ",i+1);
        scanf("%d",&prime[i]);
        for(int j=2; j<=prime[i]/2; j++){
            if(prime[i]%j==0){
                x++;
            }
        }
        if(x==0){
            printf("%d is a prime number.\n\n",prime[i]);
        }
        else{
            printf("%d is not a prime number.\n\n",prime[i]);
        }
        x=0;
    }
return 0;
}