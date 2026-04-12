#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]%2==0){
            sum+=a[i];
        }
    }
    printf("Sum up the even elements of the array: %d\n",sum);
return 0;
}