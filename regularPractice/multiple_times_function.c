#include<stdio.h>
void myFunction(){
    printf("I just go executed!\n");
}
int main(){
    //A function can be called multiple times.
    myFunction();
    myFunction();
    myFunction();
return 0;
}