

#include<stdio.h>
int main(){
    char text[]="Hello World!";
    int i,length;
    length=sizeof(text)/sizeof(text[0]);


    printf("%c\n\n",text[6]);
    printf("%s\n",text);
    printf("\n");

    for(i=0; i<length; i++){
        printf("%c",text[i]);
    }

    printf("\n\nASCII value of a character.\n");
    for(i=0; i<length; i++){
        printf("%d\n",text[i]);
    }

    //Another way to print string
char greetings[]={'H','e','l','l','o',' ','W','o','r','l','d','!','\0'};
printf("%s",greetings);
return 0;
}