#include<stdio.h>
int main(){
    int ages[]={20,22,18,35,40,48,26,87,70,105};
    float avg,sum=0;
    int i;
    int length=sizeof(ages)/sizeof(ages[0]);


    for(i=0; i<length; i++){
        sum+=ages[i];
    }
    avg=sum/length;

    printf("\nThe average age is: %.2f\n",avg);
return 0;
}