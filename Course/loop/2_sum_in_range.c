#include<stdio.h>
int main(){
    //Sum up number in a range.
    int i,x,sum=0;
    printf("Enter total number: ");
    scanf("%d",&x);
    int a[x];
    for(i=0; i<x; i++){
        printf("Enter %d no number: ",i+1);
        scanf("%d",&a[i]);
        if(a[i]<=10 && a[i]>=1){
            sum+=a[i];
        }
    }
    printf("Sum = %d\n",sum);
return 0;
}