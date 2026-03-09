#include<stdio.h>
int main(){
    //Used fgets() function
    char name2[30];
    printf("Enter your name: ");
    fgets(name2, sizeof(name2), stdin);
    printf("Hi %s",name2);



    char name1[30];

    //Ask the user to input some text
    printf("Enter your name: ");
    scanf("%s",name1);
    printf("Hello %s\n",name1);     //Print only one word
return 0;
}