#include<stdio.h>
int main(){
    int balance,level;
    char grade;
    printf("Enter your grade: ");
    scanf("%c",&grade);
    printf("Enter your balance and level: ");
    scanf("%d %d",&balance,&level);

    if(balance>1000 || (level>3 && grade=='A')){
        printf("Welcome! You may join the tour.\n");
    }
    else{
        printf("You are termineted.\n");
    }
return 0;
}