#include<stdio.h>
#include<string.h>
int main(){
    //Concatenate two string manually.
    char s1[100],s2[100];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    int length=strlen(s1)-1;
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    int length2=strlen(s2);
    for(int i=0; i<length2; i++){
        s1[i+length]=s2[i];
    }
    printf("%s",s1);
return 0;
}