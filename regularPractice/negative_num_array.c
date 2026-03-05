#include<stdio.h>
int main(){
    int i,n,x,arr[n];
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        x=i+1;
        printf("Enter the %d no array value: ",x);
        scanf("%d",&arr[i]);
    }
    printf("\nNegative value of the array: \n");
    for(i=0; i<n; i++){
        if(arr[i]<0){
            printf("%d\n",arr[i]);
        }
    }
return 0;
}