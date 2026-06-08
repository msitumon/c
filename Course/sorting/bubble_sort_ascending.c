#include<stdio.h>
int main(){
    //Ascending order using bubble sort.
    int i,j,k,n,tempt;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements:\n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    for(j=0; j<n-1; j++){
        for(k=0; k<n-j-1; k++){
            if(a[k]>a[k+1]){
                tempt=a[k];
                a[k]=a[k+1];
                a[k+1]=tempt;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}