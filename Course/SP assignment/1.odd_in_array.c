#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter total number of value: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array value: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Odd number: ");
    for(j=0; j<n; j++){
        if(a[j]%2==1){
            printf("%d ",a[j]);
        }
    }
}