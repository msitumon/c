#include<stdio.h>
int main(){
    //A 3D array with 2 blocks, each with 4 rows and 3 columns
    int example[2][4][3]={
        {
            {1,2,3},{4,5,6},{7,8,9},{10,11,12}
        },
        {
            {13,14,15},{16,17,18},{19,20,21},{22,23,24}
        }
    };

    //Print all elements using 3 nested loops.
    int i,j,k;
    printf("Three-Dimensional Arrays(Matrix array).\n");
    for(i=0; i<2; i++){
        for(j=0; j<4; j++){
            for(k=0; k<3; k++){
                printf("%d  ",example[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
return 0;
}