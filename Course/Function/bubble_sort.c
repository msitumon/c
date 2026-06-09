#include<stdio.h>
void print(int A[], int n){
    for(int i=0; i<n; i++){
        printf("%d ",A[i]);
    }
    printf("\n\n");
}
void BubbleSort(int A[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    print(A, n);
}
int main(){
    //Sorting array elements using bubble sort.
    int A[]={11, 6, 100, 5, 2, 1, 13}, n=sizeof(A)/sizeof(A[0]);
    print(A, n);
    BubbleSort(A, n);
    return 0;
}