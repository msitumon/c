#include<stdio.h>
#include<string.h>
int main(){
    //Extract a substring from a given string.
    char str[100],sub[100];
    int i,pos,length;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter the position to start extraction: ");
    scanf("%d",&pos);
    printf("Enter the substring length: ");
    scanf("%d",&length);
    for(i=0; i<=length; i++){
        sub[i]=str[i+pos];
    }
    sub[i]='\0';
    printf("The extracted substring is: \"%s\"\n",sub);
return 0;
}