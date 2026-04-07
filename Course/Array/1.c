#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number of value: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array value: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Odd number: \n");
    for(j=0; j<n; j++){
        if(a[j]%2!=0){
            printf("%d\n",a[j]);
        }
    }
return 0;
}