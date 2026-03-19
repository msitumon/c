#include<stdio.h>
// Global variables x
int x=2;
void myFunction(){
    //We can use x here
    printf("%d\n",x);
}
int main(){
    myFunction();

    //We can also use x here
    printf("%d\n",x);
    return 0;
}