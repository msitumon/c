#include<stdio.h>
int main(){
    //Insert an element in a 1D array.
    int i,n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array element: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int pos,x;
    printf("Enter insert element: ");
    scanf("%d",&x);
    printf("Enter position: ");
    scanf("%d",&pos);
    for(i=n; i>=pos; i--){
        a[i]=a[i-1];
    }
    a[pos-1]=x;
    printf("updated array: ");
    for(i=0; i<=n; i++){
        printf("%d ",a[i]);
    }
return 0;
}