#include<stdio.h>
int main(){
    char text[]="Hello World!";
    char greetings[]={'H','e','l','l','o',' ','W','o','r','l','d','!','\0'};
    //That will be same output
    printf("%s\n",text);
    printf("%s\n",greetings);

    //The size of both arrays is the same.
    printf("%zu\n",sizeof(text));       //Outputs 13
    printf("%zu\n",sizeof(greetings));       //Outputs 13

    //Use strings to crete a simple welcome message.
    char message[]="Good to see you,",name[]="Sam";
    printf("%s %s",message,name);

return 0;
}