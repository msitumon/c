#include<stdio.h>
int main(){
    int x[5]={11, 5, 8, 25, 14};
    char section[5]={'L', 'M', 'N', 'O', 'P'};
    char dept[]="Software Engineering";

    printf("%lu\n", sizeof(dept));
    printf("%lu\n", sizeof(section [1]));
    printf("%lu\n", sizeof(x[3]));
return 0;
}