#include<stdio.h>
struct Distance{
    int feet;
    float inches;
};
int main(){
    //Addition of two distance in feet and inches.
    struct Distance s1,s2,sum;
    printf("Enter first distance feet and inches: ");
    scanf("%d %f",&s1.feet,&s1.inches);
    printf("Enter second distance feet and inches: ");
    scanf("%d %f",&s2.feet,&s2.inches);
    sum.feet=s1.feet+s2.feet;
    sum.inches=s1.inches+s2.inches;
    if(sum.inches>=12){
        sum.inches-=12;
        sum.feet+=1;
        printf("Sum of distance: %d' %.2f\"\n",sum.feet,sum.inches);
    }
    else{
        printf("Sum of distance: %d' %.2f\"\n",sum.feet,sum.inches);
    }
return 0;
}