#include<stdio.h>
#include<string.h>
int main(){
    //Print individual characters of string in reverse order.
    char text[300];
    printf("Enter a text: ");
    fgets(text, sizeof(text), stdin);
    printf("Individual characters in reverse order: ");
    for(int i=strlen(text)-1; i>=0; i--){
        printf("%c ",text[i]);
    }
return 0;
}