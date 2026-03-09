#include<stdio.h>
#include<string.h>
int main(){
    char alphabet[50]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    /*String Length
    Difference between sizeof and strlen*/
    printf("%zu\n",strlen(alphabet));
    printf("%zu\n",sizeof(alphabet));


    //Concatenate Strings
    char str1[20]="Hello ";
    char str2[]="World!";
    //Concatenate str2 to str1 (result is stored in str1)
    strcat(str1,str2);
    //print str1
    printf("%s\n",str1);


    //Copy Strings
    char str3[20];
    //Copy str1 to str3
    strcpy(str3,str1);
    printf("%s\n",str3);

return 0;
}