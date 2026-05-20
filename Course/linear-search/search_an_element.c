#include<stdio.h>
int main(){
    //Linear search of an element.
    int i,n,x,count=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter array elements: \n");
    for(i=0; i<n; i++){
        printf("Enter %d no element: ",i+1);
        scanf("%d",&A[i]);
    }
    printf("Enter searching element: ");
    scanf("%d",&x);
    for(i=0; i<n; i++){
        if(A[i]==x){
            count++;
        }
    }
    if(x==0){
        printf("%d not found\n",x);
    }
    else if(x==1){
        printf("%d occur: %d time.\n",x,count);
    }
    else{
        printf("%d occurs: %d times.\n",x,count);
    }
    return 0;
}