#include<stdio.h>
int main(){
    int d1,d2,h1,h2,m1,m2,s1,s2,start,end,m;
    char temp[50];
    scanf("%s %d",temp,&d1);
    scanf("%d : %d : %d",&h1,&m1,&s1);
    scanf("%s %d",temp,&d2);
    scanf("%d : %d : %d",&h2,&m2,&s2);
    start=d1*86400+h1*3600+m1*60+s1;
    end=d2*86400+h2*3600+m2*60+s2;
    m=end-start;
    d1=m/86400;
    m=m%86400;
    h1=m/3600;
    m=m%3600;
    m1=m/60;
    s1=m%60;
    printf("%d dia(s)\n",d1);
    printf("%d hora(s)\n",h1);
    printf("%d minuto(s)\n",m1);
    printf("%d segundo(s)\n",s1);
return 0;
}