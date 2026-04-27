#include<stdio.h>
#include<string.h>
int main(){
    //Find the length of a string.
    char name[200];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    int length=strlen(name);
    printf("The length of your name is: %d\n",length-1);
return 0;
}