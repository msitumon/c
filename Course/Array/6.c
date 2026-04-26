#include<stdio.h>
int main(){
    int i,j,n,temp,a[100];
    scanf("%d",&n);
    printf("Enter element: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Acending order: \n");
    for(i=0; i<n; i++){
        printf("%d\n",a[i]);
    }
    printf("Decending order: \n");
    for(i=n-1; i>=0; i--){
        printf("%d\n",a[i]);
    }
return 0;
}