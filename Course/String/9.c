#include<stdio.h>
int main(){
    //Copy one string to another string without using library function.
    char source[100],destination[100];
    int i=0;
    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);
    while(source[i]!='\0'){
        destination[i]=source[i];
        i++;
    }
    destination[i]='\0';
    printf("Source strint: %s\n",source);
    printf("Destination string: %s\n",destination);
return 0;
}