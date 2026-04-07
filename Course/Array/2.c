#include<stdio.h>
int main(){
    int i,j,n,sum=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the element: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            sum+=a[i];
        }
    }
    printf("Sum of the even element of the array: %d\n",sum);
return 0;
}