#include<stdio.h>
int main(){
    int i,j,k,n;
    printf("Enter the n: ");
    scanf("%d",&n );
    int a[n],b[n];
    j=n;
    printf("Enter the element of the array: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        j--;
        b[j]=a[i];
    }
    printf("Reverse of the element: \n");
    for(k=0; k<n; k++){
        printf("%d\n",b[k]);
    }
return 0;
}