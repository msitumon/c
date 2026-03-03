#include <stdio.h>
int main()
{
    int a[5], i,x;
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++)
    {
        x=i+1;
        printf("The integer value of %d: %d\n",x,a[i]);
    }
    return 0;
}