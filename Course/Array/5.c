#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array element: \n");
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int x,cnt=0;
    printf("Enter searching element: ");
    scanf("%d",&x);
    for(i=0; i<n; i++){
        if(a[i]==x){
            cnt++;
        }
    }
    if(cnt>0){
        printf("The array has the element %d.",x);
    }
    else{
        printf("The array has no element %d.",x);
    }
return 0;
}