#include<stdio.h>
int FindMax(int arr[], int x){
    int i,max=arr[0];
    for(i=0; i<x; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int FindMin(int arr[], int x){
    int i,min=arr[0];
    for(i=0; i<x; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    //The maximum of minimum element of an array.
    int i,n;
    printf("Enter the array size: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    printf("Maximum element: %d\n",FindMax(a,n));
    int minVal=FindMin(a,n);
    printf("Minimum element: %d\n",minVal);
return 0;
}