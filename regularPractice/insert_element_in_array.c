#include<stdio.h>
int main(){
    int i,n,x,pos;
    int a[n+5];
    printf("Enter the number of element n: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the new element: ");
    scanf("%d",&x);
    printf("Enter position: ");
    scanf("%d",&pos);
    for(i=n-1; i>=pos; i--){
        a[i]=a[i-1];
        
        a[pos-1]=x;
    }
    for(i=0; i<=n; i++){
        printf("%d\n",a[i]);
    }
return 0;
}