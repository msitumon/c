#include<stdio.h>
int BinarySearch(int A[], int left, int right, int find){
    if(left>right){
        return -1;
    }
    int mid = (left + right) / 2;
    if(A[mid]==find){
        return mid;
    }
    else if(A[mid]>find){
        return BinarySearch(A, left, mid - 1, find);
    }
    else{
        return BinarySearch(A, mid - 1, right, find);
    }
}
int main(){
    //Recursive binary search.
    int i,n,find,left,right,result;
    printf("Enter n: ");
    scanf("%d",&n);
    left = 0;
    right = n - 1;
    int A[n];
    printf("Enter array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d",&A[i]);
    }
    printf("Enter finding element: ");
    scanf("%d",&find);
    result=BinarySearch(A, left, right, find);
    if(result == -1){
        printf("Element not find.\n");
    }
    else{
        printf("Element find at index %d.\n",result);
    }
    return 0;
}