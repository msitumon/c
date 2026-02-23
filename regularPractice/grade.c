#include<stdio.h>
int main(){
    int p,m,srs,s,sl;
    float a,b,c,d,e,sgpa;
    printf("Enter your Physics mark: ");
    scanf("%d",&p);
    switch(p)
    {
    case 80 ... 100:
        a=4.00;
        break;
    case 75 ... 79:
        a=3.75;
        break;
    case 70 ... 74:
        a=3.50;
        break;
    case 65 ... 69:
        a=3.25;
        break;
    case 60 ... 64:
        a=3.00;
        break;
    case 55 ... 59:
        a=2.75;
        break;
    case 50 ... 54:
        a=2.50;
        break;
    case 45 ... 49:
        a=2.25;
        break;
    case 40 ... 44:
        a=2.00;
        break;
    case 0 ... 39:
        a=00;
        break;
    default:
        printf("Invalid mark");
    }
    printf("GPA: %.2f\n",a);
    printf("Enter your Mathematics mark: ");
    scanf("%d",&m);
    switch(m)
    {
    case 80 ... 100:
        b=4.00;
        break;
    case 75 ... 79:
        b=3.75;
        break;
    case 70 ... 74:
        b=3.50;
        break;
    case 65 ... 69:
        b=3.25;
        break;
    case 60 ... 64:
        b=3.00;
        break;
    case 55 ... 59:
        b=2.75;
        break;
    case 50 ... 54:
        b=2.50;
        break;
    case 45 ... 49:
        b=2.25;
        break;
    case 40 ... 44:
        b=2.00;
        break;
    case 0 ... 39:
        b=00;
        break;
    default:
        printf("Invalid mark");
    }
    printf("GPA: %.2f\n",b);
    printf("Enter your Software Requirement Specifications & Ananlysis mark: ");
    scanf("%d",&srs);
    switch(srs)
    {
    case 80 ... 100:
        c=4.00;
    case 75 ... 79:
        c=3.75;
        break;
    case 70 ... 74:
        c=3.50;
        break;
    case 65 ... 69:
        c=3.25;
        break;
    case 60 ... 64:
        c=3.00;
        break;
    case 55 ... 59:
        c=2.75;
        break;
    case 50 ... 54:
        c=2.50;
        break;
    case 45 ... 49:
        c=2.25;
        break;
    case 40 ... 44:
        c=2.00;
        break;
    case 0 ... 39:
        c=00;
        break;
    default:
        printf("Invalid mark");
    }
    printf("GPA: %.2f\n",c);
    printf("Enter your Structured Programming mark: ");
    scanf("%d",&s);
    switch(s)
    {
    case 80 ... 100:
        d=4.00;
        break;
    case 75 ... 79:
        d=3.75;
        break;
    case 70 ... 74:
        d=3.50;
        break;
    case 65 ... 69:
        d=3.25;
        break;
    case 60 ... 64:
        d=3.00;
        break;
    case 55 ... 59:
        d=2.75;
        break;
    case 50 ... 54:
        d=2.50;
        break;
    case 45 ... 49:
        d=2.25;
        break;
    case 40 ... 44:
        d=2.00;
        break;
    case 0 ... 39:
        d=00;
        break;
    default:
        printf("Invalid mark");
    }
    printf("GPA: %.2f\n",d);
    printf("Enter your Structured Programming Lab mark: ");
    scanf("%d",&sl);
    switch(sl)
    {
    case 80 ... 100:
        e=4.00;
        break;
    case 75 ... 79:
        e=3.75;
        break;
    case 70 ... 74:
        e=3.50;
        break;
    case 65 ... 69:
        e=3.25;
        break;
    case 60 ... 64:
        e=3.00;
        break;
    case 55 ... 59:
        e=2.75;
        break;
    case 50 ... 54:
        e=2.50;
        break;
    case 45 ... 49:
        e=2.25;
        break;
    case 40 ... 44:
        e=2.00;
        break;
    case 0 ... 39:
        e=00;
        break;
    default:
        printf("Invalid mark");
    }
    printf("GPA: %.2f\n",e);
    
    
    sgpa=(a*3+b*3+c*3+d*3+e)/13;
    printf("Your total sGPA is: %.2f\n",sgpa);
    return 0;
}