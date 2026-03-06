#include<stdio.h>
int main(){
    int i;
    float f;
    double d;
    char c;

    printf("Size of integer: %zu\n",sizeof(i));
    printf("Size of float: %zu\n",sizeof(f));
    printf("Size of double: %zu\n",sizeof(d));
    printf("Size of character: %zu\n",sizeof(c));
return 0;
}