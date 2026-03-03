#include<stdio.h>
int main(){
    int a[5],i,x;
    printf("Mathematics code = 1\n");
    printf("Physics code = 2\n");
    printf("SRSA code = 3\n");
    printf("Structured Programming code = 4\n");
    printf("Structured Programming Lab code = 5\n\n");
    for(i=0; i<5; i++){
        x=i+1;
        printf("The mark of subject code(%d): ",x);
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++){
        x=i+1;
        printf("Mark (Subject code %d): %d\n",x,a[i]);
    }
return 0;
}