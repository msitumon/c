#include<stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n+5][n+5],i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("The given matrix: \n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++){
        int rs=0,cs=0;
        for(j=0; j<n; j++){
            rs+=a[i][j];
            cs+=a[j][i];
        }
        printf("Row %d th value: %d\n",i+1,rs);
        printf("Col %d th value: %d\n",i+1,cs);
    }
return 0;
}