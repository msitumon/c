#include<stdio.h>
int Sum(int a[], int n){
    int i,sum=0;
    for(i=0; i<n; i++){
        sum+=a[i];
    }
    return sum;
}
int main(){
    //Find out the sum of an array.
    int i,n,result;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    result=Sum(arr,n);
    printf("Sum: %d\n",result);
return 0;
}