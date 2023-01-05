#include<stdio.h>
int main()
{
    long int a,b,c,d=0;
    scanf("%ld",&a);
    c=a;
    while (a>0)
    {
        b=a%10;
        d=(d*10)+b;
        a=a/10;
    }
    if (c==d)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}