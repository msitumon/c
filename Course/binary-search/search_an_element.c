#include<stdio.h>
int Find(int A[], int n, int x){
    int left=0,right=n-1,mid;
    while(left<=right){
        mid=(left+right)/2;
        if(A[mid]==x){
            return 1;
        }
        else if(mid<x){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return 0;
}
int main(){
    //Binary search
    int i,n,x;
    printf("Enter array size: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter array elements: \n");
    for(int i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    for(int j=0; j<n-1; j++){
        for(int k=j+1; k<n; k++){
            if(A[j]>A[k]){
                int temp=A[j];
                A[j]=A[k];
                A[k]=temp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("Enter searching element: ");
    scanf("%d",&x);
    int result=Find(A,n,x);
    if(result){
        printf("Find\n");
    }
    else{
        printf("Not find\n");
    }
    return 0;
}