#include<stdio.h>
int main(){

    int myNum = 22;
    int *ptr = &myNum;
    int **pptr = &ptr;

    **pptr = 70; // changes myNum

    printf("myNum = %d\n", myNum);
return 0;
}