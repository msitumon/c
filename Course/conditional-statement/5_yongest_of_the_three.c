#include<stdio.h>
int main(){
    //Determine the youngest of the three.
    int a,b,c;
    printf("Enter the ages of Arif, Fahmid and Joy: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c){
        printf("Arif is the youngest of the three.\n");
    }
    else if(b<a && b<c){
        printf("Fahmid is the youngest of the three.\n");
    }
    else{
        printf("Joy is the youngest of the three.\n");
    }
return 0;
}