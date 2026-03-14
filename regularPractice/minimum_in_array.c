#include<stdio.h>
int main(){
    int i,j,min,n;
    printf("Enter the number of n: ");
    scanf("%d",&n);

    int a[n+5][n+5];

    printf("Enter the elements: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    min = a[0][0];
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
    }

    printf("Minimum value of the array: %d\n",min);
return 0;
}