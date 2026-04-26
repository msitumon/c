#include<stdio.h>
int main(){
    //Delete an element from a 1D array.
    int i,n,pos;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter deleting element's position: ");
    scanf("%d",&pos);
    for(i=pos; i<n; i++){
        a[i-1]=a[i];
    }
    printf("Updated array: ");
    for(i=0; i<n-1; i++){
        printf("%d ",a[i]);
    }
return 0;
}