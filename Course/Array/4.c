#include<stdio.h>
int main(){
    int i,n;
    long long int max=-2e10,min=2e10;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
        if(a[i]>=max){
            max=a[i];
        }
        if(a[i]<=min){
            min=a[i];
        }
    }
    printf("Maximum value of the array is %lld.\n",max);
    printf("Minimum value of the array is %lld\n",min);
return 0;
}